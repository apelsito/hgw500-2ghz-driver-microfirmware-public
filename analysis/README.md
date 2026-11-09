# Análisis local del microfirmware RTL8192EE

> Public source snapshot. [Scope, provenance and verification](docs/PUBLIC_SNAPSHOT.md).

El microfirmware de Core Boot R1 contiene código para el MCU 8051 del Realtek.
Las dos copias locales consultadas son idénticas, con 31.818 bytes y SHA-256
`c6e5beeeb2a716ce417a9ede5974d0876b18ebf0368c195da8a181f6ba6d9b4b`.
La cabecera Realtek ocupa 32 bytes y declara 31.786 bytes de RAM code, que
coinciden exactamente con el cuerpo. Se observaron firma `0x92e1`, versión 19.0
y revisión 4280. Los bytes de fecha se conservan como valores literales.

REA 6.8.0 se ejecutó realmente sobre una copia privada en ext4. Su inspección
de entropía y su búsqueda de regiones con Binwalk terminaron correctamente.
La inspección genérica rechazó el formato y el importador RAW rechazó la
arquitectura 8051, porque su selector sólo admite 6502, x86, x86_64, ARM, ARM64
y m68k. Los errores completos están en `rea-artifact.json` y
`rea-raw-8051.json`. Estos resultados delimitan lo que REA ha podido analizar.

Ghidra 12.1.3 nativo sí realizó la importación con `8051:BE:16:default` y
análisis estático en un proyecto propio. La carga del payload en CODE `0x4000`
es una inferencia respaldada por los vectores LJMP, las entradas de interrupción
con PUSH/POP y RETI, y la estructura del arranque. La ventana de descarga que
utiliza el driver en el espacio de registros del host empieza en `0x1000`.

Se exportaron 138 funciones observadas y 5.217 instrucciones. Una segunda
lectura independiente verificó cada instrucción contra los bytes originales,
sin solapamientos, para 9.269 bytes únicos, un 29,16 % del payload. El resto
puede contener código sin descubrir y datos. Las reconstrucciones C de Ghidra
están identificadas como pseudocódigo, y se conservan ensamblador y offsets
para contrastarlas. `verification.json` recoge estos límites.

La ruta inicial `0x4000 → 0x494d → 0x4908` lleva al procesamiento de tablas
de inicialización y a `0x464d`, donde se observa preparación de pila y timer.
La entrada `0x5ff6` guarda registros y llama a `0x4bf8` y, según estado, a
`0x4fce`. Hay 28 referencias a nueve direcciones CODE inferiores a `0x4000`,
incluida una llamada a `0x3e0c`. Esa región no está en este archivo y podría
corresponder a mask ROM. Su comportamiento queda sin reconstruir.

## Candidato público observado

El snapshot de linux-firmware fijado a
`02665d2016e1360cd2135998f36cfa303b5be6e1` declara en WHENCE el enlace
`rtlwifi/rtl8192eefw.bin → rtl8192eu_nic.bin`. El blob destino difiere del
instalado y constituye un candidato que requiere validación física propia.

| Propiedad | Core Boot R1 | Candidato público |
| --- | --- | --- |
| Versión de cabecera | 19.0 | 35.7 |
| Revisión | 4280 | 23052 |
| Firma | 0x92e1 | 0x92e1 |
| Bytes del archivo | 31.818 | 32.286 |
| RAM code declarado y observado | 31.786 | 32.254 |
| Padding a palabra de 32 bits | 2 bytes | 2 bytes |
| Cabe en la reserva de 0x8000 del driver | Sí | Sí |

El SHA-256 del candidato es
`b15bc955fba2fc3abc093affe62c9f7284a0b84d4f13f8ce55366488dc9aad8b`.
Se conserva privadamente en
`/workspace/build/evidence/hgw500-rtl8192ee-20261103/public-candidate/rtl8192eu_nic.bin`.
La procedencia, el enlace WHENCE y la comprobación de cabecera están en
`upstream-comparison.json` y `upstream-candidate.json`.

La importación 8051 del candidato se realizó en un segundo proyecto separado.
Se observaron 335 funciones y se verificaron 6.061 instrucciones, con 10.986
bytes únicos, un 34,06 % del payload. Las entradas de vector son `0x4937`,
`0x6ff0`, `0x702c`, `0x8094` y `0x6ff1`. La verificación y los límites están
en `public-candidate/verification.json`. Las cantidades de funciones de ambas
imágenes son inventarios del análisis, y no miden calidad o equivalencia.

La función instalada `CODE:ace8` y la candidata `CODE:71c1` leen HMETFR
`0x01cc` con máscara `0x0f` y acceden a HMEBOX `0x01d0` con stride de cuatro
bytes. Coincide el esquema básico de cuatro buzones que usa el driver. La
identidad completa de los comandos H2C y eventos C2H queda por verificar.
`mailbox-comparison.json` distingue instrucciones verificadas de coincidencias
de bytes todavía sin decodificar.

## Conservación y reproducción

`run_analysis.py` reproduce la primera importación en un workspace ausente.
`analyze_public_candidate.py` reproduce el candidato público fijado en un
segundo directorio ausente. Los scripts no acceden al router.
`verify_export.py` contrasta el primer ensamblador con ambos originales.
El binario instalado conserva su SHA-256, y los cuerpos y proyectos Ghidra
permanecen en ext4 privado. Las salidas de esta carpeta permanecen fuera de Git.

Fuentes de procedencia pública

- [Snapshot fijado de linux-firmware](https://kernel.googlesource.com/pub/scm/linux/kernel/git/firmware/linux-firmware/+/02665d2016e1360cd2135998f36cfa303b5be6e1)
- [Deduplicación del firmware RTL8192EE](https://git.ti.com/cgit/processor-firmware/ti-linux-firmware/commit/rtlwifi?id=b986edd80647b68af068ebaaa1323d2b046c5435)
- [Análisis directo del mapa MCU de un Realtek emparentado](https://8051enthusiast.github.io/2021/07/05/002-wifi_fun.html)
