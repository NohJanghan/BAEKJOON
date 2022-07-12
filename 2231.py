#BOJ Bronze II - 분해합

def generate(a: int):
    res = a
    strA = str(a)

    for i in strA:
        res += int(i)
    return res

N = int(input())

ans = 0
while N != generate(ans):
    if ans >= N:
        ans = 0
        break
    ans += 1

print(ans)