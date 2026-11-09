# Procedencia y derechos

Los binarios Realtek mantienen los derechos de su proveedor. Esta organización
privada no añade una licencia de redistribución al blob OEM 19.0. Se extrajo
del firmware Core Boot R1 y se conserva íntegro por el hash documentado.

El candidato 35.7 procede del snapshot público linux-firmware
`02665d2016e1360cd2135998f36cfa303b5be6e1`, blob `rtlwifi/rtl8192eu_nic.bin`.
Conservar el aviso Realtek de ese snapshot junto al binario.

El ensamblador y pseudocódigo proceden de la inspección de los mismos binarios
con REA 6.8.0 y Ghidra 12.1.3. No se recuperan comentarios del código fuente
original desde los binarios. Los scripts de análisis pertenecen al proyecto
OpenMitraStar y mantienen las cabeceras de procedencia disponibles.
