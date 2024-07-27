# 10분

from collections import deque

N = int(input())
num = deque(i+1 for i in range(N))

for _ in range(N-1):
    num.popleft()
    num.append(num.popleft())

print(num[0])
