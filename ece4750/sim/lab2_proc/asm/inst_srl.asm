csrr x1, mngr2proc < 0x00008000
csrr x2, mngr2proc < 0x00000003
nop
nop
nop
nop
nop
nop
nop
nop
srl x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x00001000
nop
nop
nop
nop
nop
nop
nop
nop