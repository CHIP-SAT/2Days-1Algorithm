#// 12:07 시작
#// 13:30 끝
N = int(input())
alp2 = ['aa', 'bb', 'cc', 'dd', 'ee', 'ff', 'gg', 'hh', 'ii', 'jj', 'kk', 'll', 'mm', 'nn', 'oo', 'pp', 'qq', 'rr', 'ss', 'tt', 'uu', 'vv', 'ww', 'xx', 'yy', 'zz']
alp1 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
word = ''
output1 = 0 #출력
c = 0 #그룹단어 판별용
for i in range(N): #N번 반복할거다
    word = input()
    for j in alp2: #새 단어 만들기
        while True:
            if j in word:
                word = word.replace(j, alp1[alp2.index(j)])
            else:
                break
    for k in word: #그룹단어인지 판별
        if word.count(k)==1:
            c +=1
    if c == len(word):
        output1 += 1
    c = 0

print(output1)