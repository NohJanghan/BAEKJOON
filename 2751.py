#BOJ Silver V - 수 정렬하기 2
import sys
input = sys.stdin.readline

N = int(input())

arr = list()
for _ in range(N): 
    arr.append(int(input()))
arr.sort()
for element in arr:
    print(element)
