# Use x3 to track the control flow pattern
addi  x3, x0, 0

csrr  x1, mngr2proc < 2
csrr  x2, mngr2proc < 2

nop
nop
nop
nop
nop
nop
nop
nop

# This branch should be taken
bgeu   x1, x2, label_a
addi  x3, x3, 0b01

nop
nop
nop
nop
nop
nop
nop
nop

label_a:
addi  x3, x3, 0b10

# Only the second bit should be set if branch was taken
csrw proc2mngr, x3 > 0b10