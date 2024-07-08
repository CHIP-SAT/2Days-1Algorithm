# 45분 + 눈물

from copy import deepcopy

N, M = map(int, input().split())
nums = list(map(int, input().split()))
result = []
for i in nums:
    new_nums = deepcopy(nums)
    new_nums.remove(i)
    for j in new_nums:
        if i+j < M:
            new_nums.remove(j)
            for k in new_nums:
                if i+j+k <= M:
                    result.append(i+j+k)
print(max(result))
