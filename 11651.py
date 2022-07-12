#BOJ Silver 5 - 좌표 정렬하기 2
import sys
input = sys.stdin.readline

N = int(input())

coord = list()
for i in range(N):
    a, b = map(int, input().split())
    coord.append([a,b])

coord.sort(key= lambda x: x[0])
coord.sort(key= lambda x: x[1])

for i in range(N):
    print(coord[i][0], coord[i][1])