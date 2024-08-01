# 1시간

import sys
from collections import deque

N = int(sys.stdin.readline().strip())
num = deque(map(int, sys.stdin.readline().strip().split()))
N_num = deque(i+1 for i in range(N))

side = deque()

while N_num:
    if num and num[0] == N_num[0]:
        num.popleft()
        N_num.popleft()
    elif side and side[-1] == N_num[0]:
        side.pop()
        N_num.popleft()
    else:
        if num:
            side.append(num.popleft())
        else:
            break

if not side:
    print("Nice")
else:
    print("Sad")
