# 15분

import sys

n = int(sys.stdin.readline().strip())
for _ in range(n):
    s = sys.stdin.readline().strip()
    while True:
        if "()" in s:
            s = s.replace("()", "")
        else:
            break
    if s:
        print("NO")
    else:
        print("YES")
        