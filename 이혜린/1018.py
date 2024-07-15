# 1시간 + 너무*100 못생긴 코드

M, N = map(int, input().split())

list1 = []
A = []
list_count = []


def count(a, b):
    for j in A:
        c = 0
        for w in range(4):
            for k in [j[0], j[2], j[4], j[6]]:
                if k[2*w] != a:
                    c += 1
                if k[2*w+1] != b:
                    c += 1
            for k in [j[1], j[3], j[5], j[7]]:
                if k[2*w] != b:
                    c += 1
                if k[2*w+1] != a:
                    c += 1
        list_count.append(c)


for i in range(M):
    list1.append(input())

for n in range(N-7):
    for m in range(M-7):
        o = []
        for q in range(8):
            o.append(list1[m+q][n:n+8])
        A.append(o)


count("B", "W")
count("W", "B")

print(min(list_count))
