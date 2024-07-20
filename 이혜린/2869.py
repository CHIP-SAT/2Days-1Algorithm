# 30분

A, B, V = map(int, input().split())
x = (V-B)/(A-B)
if x % 1 > 0:
    print(int(x)+1)
else:
    print(int(x))
