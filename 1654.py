#BOJ Silver 2 - 랜선 자르기
#더 갈끔한 방법으로 개선 필요
import sys
input = sys.stdin.readline

K, N = map(int, input().split())

cable_length = list()
for i in range(K):
    length = int(input())
    cable_length.append(length)

def counter(cables: list,length: int):
    return sum( i // length for i in cables)

#binary search
left = 1
right = max(cable_length)
length = 1

while left < right:
    count = counter(cable_length, length)

    if count == N:
        #length가 더 커져도 count가 변하지 않을 수 있음
        #이 경우 length의 최댓값을 찾아야함
        #여기서도 binary search 이용. 선형탐색할 경우 시간 over
        left = length
        while left < right:
            if counter(cable_length, length) == count:
                left = length
            else: #counter(~) < count
                right = length - 1
            length = (left + right + 1) // 2
        break
    elif count > N:
        left = length
        if counter(cable_length, length + 1) < N:
            break
    else:
        right = length - 1
    #length 업데이트를 while문 끝에서 하지 않으면, right=length-1 때문에, 잘못된 결과가 나올 수 있음
    # <예제 입력>
    # 5 6
    # 1
    # 1
    # 1
    # 1
    # 5
    length = (left + right + 1) // 2 

print(length)