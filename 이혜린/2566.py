# 15분

num = [list(map(int, input().split())) for _ in range(9)]

list_max = []
for i in num:
    list_max.append(max(i))

M = list_max.index(max(list_max))
N = num[M].index(max(list_max))

print(max(list_max))
print(M+1, N+1)