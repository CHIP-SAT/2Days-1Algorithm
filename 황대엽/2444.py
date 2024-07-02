n=int(input())
for j in range(n):
    for i in range(n-1-j):
        print(' ', end='')
    for i in range(2*j+1):
        print('*', end='')
    print()
for j in range(n-1):
    for i in range(j+1):
        print(' ', end='')
    for i in range(2*n-2*j-3):
        print('*', end='')
    print()

