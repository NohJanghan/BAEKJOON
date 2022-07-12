#BOJ Silver 2 - 랜선 자르기
import sys
input = sys.stdin.readline

K, N = map(int, input().split())
cable_length = list()
total_length = 0
for i in range(K):
    length = int(input())
    cable_length.append(length)
    total_length += length

#binary search
def binary_search(cables: list, N: int):
    left = 0
    right = max(cables)

    while left < right:
        length = (left + right + 1) // 2
        count = counter(cables, length) #cables의 각 요소를 2로 floor divide한 값의 합
        if count == N:
            while counter(cables, length + 1) == count and count != 0: #length에 1을 더해도 count가 변하지 않으면 length에 1을 계속 더함
                length += 1
            return length
        elif count > N:
            left = length
            if counter(cables, length + 1) < N:
                return length
        else:
            right = length - 1
    return -1 #or count일수도, because N>1이라도 가능

def counter(cables: list, length: int):
    return sum( i // length for i in cables)

print(binary_search(cable_length, N))