# 20분

n = int(input())
company = {}

for _ in range(n):
    name, state = input().split()
    if state == "enter":
        company[name] = state
    else:
        del company[name]

people = sorted(company, reverse=True)
print(*people, sep="\n")
