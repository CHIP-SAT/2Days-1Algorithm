# 15분

from collections import deque
import sys

N = int(input())

q = deque()
for _ in range(N):
    n = sys.stdin.readline().strip().split()
    if n[0] == "push":
        q.append(int(n[1]))
    elif n[0] == "pop":
        if not q:
            print(-1)
        else:
            print(q.popleft())
    elif n[0] == "size":
        print(len(q))
    elif n[0] == "empty":
        if not q:
            print(1)
        else:
            print(0)
    elif n[0] == "front":
        if not q:
            print(-1)
        else:
            print(q[0])
    elif n[0] == "back":
        if not q:
            print(-1)
        else:
            print(q[-1])