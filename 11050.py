#BOJ Bronze I - 이항 계수 1

N,K = map(int, input().split())

#nCk 구하기
res = 1
for i in range(K): #nPk
    res *= N - i

for i in range(K):
    res //= K - i

print(res)