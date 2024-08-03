# 30분

import sys

subject = []
score = []
grade = []


def calculation(g):
    p = 0
    if g[0] == "A":
        p += 4
    elif g[0] == "B":
        p += 3
    elif g[0] == "C":
        p += 2
    elif g[0] == "D":
        p += 1
    if g[-1] == "+":
        p += 0.5
    return p


for _ in range(20):
    line = sys.stdin.readline().split()
    if line[2] == "P":
        continue
    else:
        subject.append(line[0])
        score.append(float(line[1]))
        grade.append(line[2])


grade_ = [calculation(g) for g in grade]

o = 0
for i in range(len(subject)):
    o += score[i]*grade_[i]

print(o/sum(score))
