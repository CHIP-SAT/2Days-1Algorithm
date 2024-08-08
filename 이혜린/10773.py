# 15분

import sys

K = int(sys.stdin.readline())
num = list(int(sys.stdin.readline().strip()) for _ in range(K))

p = []
for i in num:
    if i == 0:
        p.pop()
    else:
        p.append(i)

print(sum(p))
