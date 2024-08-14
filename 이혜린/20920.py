# 1시간
import sys
from collections import Counter

N, M = map(int, sys.stdin.readline().strip().split())
word = [sys.stdin.readline().strip() for _ in range(N)]

words = [w for w in word if len(w) >= M]

words = Counter(words)

while words:
    m = words.most_common(1)[0][1]
    k = [k for k, v in words.items() if v == m]
    if len(k) > 1:
        s = max(len(i) for i in k)
        mm = [i for i in k if len(i) == s]
        if len(mm) > 1:
            mm.sort()
            for i in mm:
                print(i)
                del words[i]
        else:
            print(mm[0])
            del words[mm[0]]
    else:
        print(k[0])
        del words[k[0]]
