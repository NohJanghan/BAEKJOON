#BOJ Silver IV - 숫자 카드 2
import sys
input = sys.stdin.readline

N = int(input())
arr = list(map(int, input().split()))
deck :dict = dict()
for i in arr:
    if i in deck:
        deck[i] += 1
    else:
        deck[i] = 1

M = int(input())
inputArr = list(map(int, input().split()))
for i in inputArr:
    if i in deck:
        print(deck[i], end=' ')
    else:
        print('0', end=' ')
        