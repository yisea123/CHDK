#31f4
PLATFORMID=12788

PLATFORMOS=dryos

MEMBASEADDR=0x1900
RESTARTSTART=0x50000
MEMISOSTART=0x12e9fc
MEMISOSIZE=0x40000
ROMBASEADDR=0xFFC00000
PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
PLFLAGS+=-DRESTARTSTART=$(RESTARTSTART)

NEED_ENCODED_DISKBOOT=4

KEYSYS=d4a



