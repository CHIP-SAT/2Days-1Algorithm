# 15분

import sys
a, b = map(int, sys.stdin.readline().strip().split())
A = set(map(int, sys.stdin.readline().strip().split()))
B = set(map(int, sys.stdin.readline().strip().split()))

n = 0
for i in B:
    if i not in A:
        n += 1
for i in A:
    if i not in B:
        n += 1

print(n)
