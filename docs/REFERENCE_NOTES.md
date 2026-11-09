# Preserved component notes

Editorial copy of the previous README. Workstation paths are normalized; original source and immutable evidence are not modified. Earlier status claims belong to their named checkpoints, not the live device. Start with the current [README](../README.md).

# HGW500 2.4 GHz Driver Microfirmware

Repositorio privado del microfirmware 8051 del Realtek RTL8192EE. Contiene los
dos blobs genéricos fijados, su inspección REA, ensamblador con offsets verificables
y pseudocódigo C de todas las funciones descubiertas por Ghidra 12.1.3.

| Variante | Versión | Bytes | Funciones exportadas | Instrucciones verificadas | Cobertura del payload |
| --- | --- | --- | --- | --- | --- |
| Core Boot R1 | 19.0 | 31.818 | 138 | 5.217 | 29,16 % |
| Candidato público linux-firmware | 35.7 | 32.286 | 335 | 6.061 | 34,06 % |

La exportación completa de pseudocódigo se realizó el 3 de noviembre de 2026
abriendo los proyectos existentes en modo de solo lectura. Las 138 y 335
funciones descubiertas completaron la decompilación. El ensamblador conservado
se verificó de nuevo contra cada blob original.

## Contenido

- `firmware/rtl8192eefw-19.0.bin` conserva la variante instalada genérica.
- `firmware/rtl8192eu_nic-35.7.bin` conserva el candidato público fijado.
- `recovered/installed-19.0/` y `recovered/public-35.7/` contienen un archivo C por
  función y `functions.tsv` con nombre, dirección, tamaño y resultado.
- `analysis/ghidra-instructions.tsv` conserva el ensamblador instalado, con bytes
  y offsets originales. `analysis/public-candidate/ghidra-instructions.tsv`
  conserva el candidato. También incluyen referencias y mapas de memoria.
- `analysis/` conserva los informes REA, la comparación de cabeceras y buzones,
  los reportes Ghidra y los recibos históricos.
- `MANIFEST.json` fija por SHA-256 el contenido de esta entrega.

REA 6.8.0 realizó inspección de entropía y regiones. Su importador genérico
rechaza este formato y el selector RAW rechaza 8051. Los errores completos se
conservan en `analysis/rea-artifact.json` y `analysis/rea-raw-8051.json`. Ghidra
importa el payload con `8051:BE:16:default` y base CODE `0x4000` respaldada por
vectores de salto y prologues de interrupción. La región CODE inferior a
`0x4000` no viene en estos archivos y algunas funciones llaman a ella. La
reconstrucción mantiene esas referencias a ROM pendientes.

El candidato público procede de linux-firmware en el commit
`02665d2016e1360cd2135998f36cfa303b5be6e1`. WHENCE declara el enlace de
`rtlwifi/rtl8192eefw.bin` a `rtlwifi/rtl8192eu_nic.bin`. La comparación observó
el esquema básico de cuatro buzones H2C. La compatibilidad completa H2C/C2H y
la aceptación física del candidato siguen pendientes.

## Verificación y reproducción

Verificar esta entrega desde cualquier checkout con Python 3.

```powershell
python scripts/verify_bundle.py
```

Reproducir el análisis en Engineering usando un directorio ext4 nuevo para el
proyecto Ghidra y otro directorio nuevo para las salidas.

```powershell
wsl -d Engineering -u apelsito --exec python3 ${WORKSPACE}/hgw500-2ghz-driver-microfirmware/scripts/analyze_firmware.py --firmware ${WORKSPACE}/hgw500-2ghz-driver-microfirmware/firmware/rtl8192eefw-19.0.bin --workspace ${EVIDENCE_ROOT}/rtl8192ee-new-19 --output ${EVIDENCE_ROOT}/rtl8192ee-new-19-export
```

El mismo comando admite el blob 35.7. `--rea` y `--ghidra` permiten indicar las
instalaciones locales. Los scripts de `analysis/` son los originales históricos
con sus rutas de trabajo. La entrada portable actual es `scripts/analyze_firmware.py`.

El SHA-256 del instalado es
`c6e5beeeb2a716ce417a9ede5974d0876b18ebf0368c195da8a181f6ba6d9b4b`.
El SHA-256 del candidato es
`b15bc955fba2fc3abc093affe62c9f7284a0b84d4f13f8ce55366488dc9aad8b`.

El código C es pseudocódigo generado y conserva las direcciones que permiten
contrastarlo con el ensamblador. Los bytes sin descubrir y la ROM ausente
limitan la reconstrucción. Los blobs originales mantienen su procedencia y
derechos del proveedor, descritos en `NOTICE.md`.

La pasada de optimización del 4 de noviembre (`docs/MICROFIRMWARE_OPTIMIZATION_20261104.md`; maintainer-workspace reference)
amplía la recuperación 35.7 desde los destinos H2C verificados: 10.295
instrucciones, 18.921 bytes y 578 funciones detectadas. Las exportaciones
históricas anteriores se conservan. El verificador procesa las filas en flujo,
comprueba longitudes de opcode 8051 y mantiene las validaciones con `python -O`.
Sus pruebas se ejecutan con `python scripts/test_verify_bundle.py`.

## Arquitectura de procesamiento del HGW500

El [esquema y sus evidencias](../docs/HARDWARE_ARCHITECTURE.md), conservados el
3 de noviembre de 2026, identifican una CPU LHost ARC750 a 500 MHz y cuatro
coprocesadores: MuC, AuC, DSP y la MCU 8051 del RTL8192EE. Incluyen el inventario
SPI NOR de 16 MiB y el perfil DDR3 OEM de 128 MiB, con fuentes y límites.

![Arquitectura de procesamiento del HGW500](../docs/hardware/hgw500-processing-architecture.png)

El diagrama es una vista conceptual. La etiqueta qdrv describe el papel del
host; la integración física de 5 GHz en Core Boot R1 sigue pendiente.
