a=input().strip()

count_c = 0

for i in range(len(a)):
    if a[i] == 'A' or a[i] == 'B' or a[i] == 'C':
        count_c += 3
    elif a[i] == 'D' or a[i] == 'E' or a[i] == 'F':
        count_c += 4
    elif a[i] == 'G' or a[i] == 'H' or a[i] == 'I':
        count_c += 5
    elif a[i] == 'J' or a[i] == 'K' or a[i] == 'L':
        count_c += 6
    elif a[i] == 'M' or a[i] == 'N' or a[i] == 'O':
        count_c += 7
    elif a[i] == 'P' or a[i] == 'Q' or a[i] == 'R' or a[i] == 'S':
        count_c += 8
    elif a[i] == 'T' or a[i] == 'U' or a[i] == 'V':
        count_c += 9
    elif a[i] == 'W' or a[i] == 'X' or a[i] == 'Y' or a[i] == 'Z':
        count_c += 10

print(count_c)