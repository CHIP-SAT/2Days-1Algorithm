#시작 10:30
#끝   12:30

X = []
Y = []
listWB = []
listBW = []
val = 0
val_old = 0
for i in range(8):
    for j in range(4):
        if i%2 == 0:
            listWB.append('W')
            listWB.append('B')
            listBW.append('B')
            listBW.append('W')
        if i%2 == 1:
            listWB.append('B')
            listWB.append('W')
            listBW.append('W')
            listBW.append('B')

a, b = map(int, input().split())
for i in range(a):
    X.append(list(input()))

for ASDF in range(a-7):

    for asdf in range(b-7):
        for i in range(ASDF, 8+ASDF):
            for j in range(asdf, asdf+8):
                Y.append(X[i][j])

        for k in range(2):
            for l in range(64):
                if k == 0:
                    if listWB[l] == Y[l]:
                        val += 1
                        if ASDF == 0:
                            val_old += 1
                if k == 1:
                    if listBW[l] == Y[l]:
                        val += 1
            if val_old > val:
                val_old = val
            val = 0
        Y = []
print(val_old)