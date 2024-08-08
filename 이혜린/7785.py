# 15분

import sys

n = int(sys.stdin.readline())
pp = list(tuple(sys.stdin.readline().strip().split()) for _ in range(n))

company = set()
for i in range(n):
    if pp[i][1] == "enter":
        company.add(pp[i][0])
    elif pp[i][1] == "leave":
        company.remove(pp[i][0])

for i in sorted(company, reverse=True):
    print(i)
