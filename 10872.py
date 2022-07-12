#BOJ Bronze 3 - 팩토리얼
#재귀

def factorial(a):
    if a <= 1:
        return 1
    else:
        return a * factorial(a-1)

N = int(input())
print(factorial(N))