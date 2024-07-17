#// 15:07 시작
#// 16:07 끝
numlist = []
tmp, row, col = 0, 0, 0

for i in range(9):
    a = list(map(int, input().split()))
    numlist.append(a)

for i in range(9):
    for j in range(9):
        if numlist[i][j] >= tmp:
            tmp = numlist[i][j]
            row = i+1
            col = j+1

print('{}\n{} {}'.format(tmp, row, col))