# BOJ Silver 2 - 유기농 배추
import sys
input = sys.stdin.readline

def search(row:int , col: int, farm: list[list[int]]) -> int:
    if row < 0 or col <0:
        return 0
    elif row >= len(farm) or col >= len(farm[0]):
        return 0
    if(farm[row][col] == 0):
        return 0
    
    farm[row][col] = 0    
    x_dir = (0, 1, 0, -1)
    y_dir = (1, 0, -1, 0)
    for i in range(4):
        search(row + y_dir[i], col + x_dir[i], farm)
    return 1

TESTCASE = int(input())
sys.setrecursionlimit(987654321)

for _ in range(TESTCASE):
    m, n, k = map(int, input().split())

    farm = [[0 for _ in range(n)] for _ in range(m)]

    for _ in range(k):
        row, col = map(int, input().split())
        farm[row][col] = 1

    res = 0
    for row in range(m):
        for col in range(n):
            res += search(row, col, farm)

    print(res)