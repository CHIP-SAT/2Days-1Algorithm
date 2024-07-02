x = list(input())
y = len(x)//2
q = 1

for i in range(y):
    if x[i] == x[-(i+1)]:
        q = 1
    else:
        q = 0
        break

print(q)