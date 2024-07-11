# 20분

n = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
t = 0
word = input()

for s in list(word):
    for i in n:
        for j in str(i):
            num = n.index(i)+3
            if s == j:
                t += num

print(t)
