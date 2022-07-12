#BOJ Silver V - 나이순 정렬
#ramda식과 sort함수를 이용해서 코드 길이와 복잡도를 크게 줄일 수 있음
import sys
input = sys.stdin.readline

def sortPair(arr: list):
    if len(arr) < 2:
        return arr

    pivot = arr[0][0]
    smaller = list()
    bigger = list()
    equal = list()

    for element in arr:
        if element[0] < pivot:
            smaller.append(element)
        elif element[0] > pivot:
            bigger.append(element)
        else:
            equal.append(element)
    arr = sortPair(smaller) + equal + sortPair(bigger)
    return arr
            
        
#입력
N = int(input())

data = list()
for _ in range(N):
    age, name =input().split()
    age = int(age)
    data.append([age, name])

#정렬
resData = sortPair(data)

for output in resData:
    print(output[0], output[1])