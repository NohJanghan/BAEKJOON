#BOJ Bronze II - 피보나치 수 5

def fibonacci(a):
    if a == 0:
        return 0
    elif a <= 2:
        return 1
    else:
        return fibonacci(a-1) + fibonacci(a-2)

N = int(input())
print(fibonacci(N))