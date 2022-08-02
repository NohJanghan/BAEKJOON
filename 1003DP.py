#BOJ Silver 3 - 피보나치 함수
import sys
from types import NoneType
input = sys.stdin.readline

fibonacci_table = dict()
def fibonacci(n: int, count0, count1):
    if n == 0:
        count0 += 1
        return count0, count1
    elif n == 1:
        count1 += 1
        return count0, count1
    else:
        if n in fibonacci_table:
            return fibonacci_table[n]

        a, b = fibonacci(n-1, count0, count1)
        fib2 = fibonacci(n-2, count0, count1)
        a += fib2[0]
        b += fib2[1]
        fibonacci_table[n] = (a,b)
        return fibonacci_table[n]
        

T = int(input())
for _ in range(T):
    a,b = fibonacci(int(input()), 0, 0)
    print(a,b)