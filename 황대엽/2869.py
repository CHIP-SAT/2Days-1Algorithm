#// 21:00 시작
#// 22:00 끝
import sys

a, b, v = map(int, sys.stdin.readline().split())

count = 1
r = 0

while True:  
  if v <= a:
    print(count)
    break
  else:
    r = v // a
    count += r
    v = v - (a * r) + (b * r) 