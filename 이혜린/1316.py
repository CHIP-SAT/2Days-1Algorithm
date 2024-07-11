# 30분

n = int(input())
outcome = 0

for j in range(n):
    word = input()
    result1 = list(str(word))
    result2 = []

    for i in range(len(word)-1):
        if word[i] == word[i+1]:
            result1.remove(word[i])
    for i in word:
        if i not in result2:
            result2.append(i)

    if len(result1) == len(result2):
        outcome += 1

print(outcome)
