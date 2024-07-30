# 15분

import sys

N = sys.stdin.readline()
N_num = set(sys.stdin.readline().split())

M = sys.stdin.readline()
M_num = sys.stdin.readline().split()

p = []
for i in M_num:
    if i in N_num:
        p.append("1")
    else:
        p.append("0")

print(" ".join(p))