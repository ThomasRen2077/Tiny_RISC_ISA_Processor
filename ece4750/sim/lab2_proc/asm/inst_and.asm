csrr x1, mngr2proc < 0x0f0f0f0f
csrr x2, mngr2proc < 0x00ff00ff
nop
nop
nop
nop
nop
nop
nop
nop
and x3, x1, x2
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 0x000f000f
nop
nop
nop
nop
nop
nop
nop
nop
