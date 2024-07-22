#// 20:00 시작
#// 20:30 끝
n=int(input())
lobby=[]
for i in range(n):
    a,b=input().split()
    if b=='enter':
        lobby.append(a)
    elif b=='leave':
        lobby.remove(a)
lobby.sort(reverse=True)
for i in lobby:
    print(i)