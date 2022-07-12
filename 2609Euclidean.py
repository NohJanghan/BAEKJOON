#BOJ Silver V - 최대공약수와 최대공배수

def gcd(a: int, b: int): #유클리드 호제법
    tmp = a % b
    if tmp == 0:
        return b
    else:
        return gcd(b, tmp)

a, b = map(int, input().split())
gcmOfAB = gcd(a,b)
print(gcmOfAB)
print(a*b//gcmOfAB)

