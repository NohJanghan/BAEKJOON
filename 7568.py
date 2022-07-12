#BOJ Silver V - 덩치
import sys
input = sys.stdin.readline

N = int(input())
info = list()
for i in range(N):
    a = map(int, input().split())
    info.append(list(a))

sortedInfo = sorted(info)

for i in info:
    a = 0
    for j in range(len(sortedInfo)):
        if (sortedInfo[j][0] > i[0] and sortedInfo[j][1] > i[1]):
            a += 1
    print(a + 1)
