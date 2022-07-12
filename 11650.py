#BOJ Silver V - 좌표 정렬하기
N = int(input())

coordList = list()
for i in range(N):
    a, b = map(int, input().split())
    coordList.append([a,b])
coordList.sort()

for pair in coordList:
    print(pair[0], pair[1])