#BOJ Silver IV - 수 찾기
import sys
input = sys.stdin.readline

N = int(input())
tmp = list(map(int, input().strip().split()))
dictionary = dict()
for i in tmp:
    dictionary[i] = 1

M = int(input())
inputNum = list(map(int, input().strip().split()))

for i in inputNum:
    if i in dictionary:
        print('1')
    else:
        print('0')