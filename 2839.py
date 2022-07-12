#BOJ Silver 4 - 설탕 배달

N = int(input())

bigBagMax = N // 5

def func(N: int, bigBag):
    rest = N - bigBag * 5
    if bigBag == -1:
        return -1
    elif rest % 3 == 0:
        smallBag = rest // 3
        return bigBag + smallBag
    else:
        return func(N, bigBag - 1)

print(func(N,bigBagMax))