#BOJ Bronze I - 달팽이는 올라가고 싶다
import math

A, B, V = map(int, input().split())

days = math.ceil((V - B) / (A - B))
print(days)
