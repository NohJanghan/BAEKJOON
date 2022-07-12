#BOJ Silver 3 - 터렛
import sys
input = sys.stdin.readline

N = int(input())
for i in range(N):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    distance = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

    maxLen = max([distance, r1, r2])
    sumLen = distance + r1 + r2
    if distance == 0:
        if r1 == r2:
            print('-1')
        else:
            print('0')
    #길이가 distance, r1, r2인 세 선분의 길이의 최댓값이 나머지 길이의 합보다 작음 => 두개의 교점
    #길이가 distance, r1, r2인 세 선분의 길이의 최댓값이 나머지 길이의 합과 같음 => 하나의 교점
    #길이가 distance, r1, r2인 세 선분의 길이의 최댓값이 나머지 길이의 합보다 큼 => 만나지 않음
    elif maxLen < sumLen - maxLen:
        print('2')
    elif maxLen > sumLen - maxLen:
        print('0')
    else:
        print('1')