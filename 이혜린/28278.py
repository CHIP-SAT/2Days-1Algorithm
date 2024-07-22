# 20분

import sys

N = int(input())
s = []

for _ in range(N):
    i = list(map(int, sys.stdin.readline().strip().split()))
    if i[0] == 1:
        s.append(i[1])
    elif i[0] == 2:
        if s:
            print(s.pop())
        else:
            print(-1)
    elif i[0] == 3:
        print(len(s))
    elif i[0] == 4:
        if not s:
            print(1)
        else:
            print(0)
    elif i[0] == 5:
        if s:
            print(s[-1])
        else:
            print(-1)
