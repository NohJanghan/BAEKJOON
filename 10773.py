#BOJ Silver 4 - 제로
import sys
input = sys.stdin.readline

K = int(input().strip())

ledger = list()
for _ in range(K):
    money = int(input().strip())
    if money == 0:
        ledger.pop()
    else:
        ledger.append(money)
print(sum(ledger))