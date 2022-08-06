# BOJ Silver 4 - 수열 정렬
import sys
input = sys.stdin.readline

N = int(input())
array = list()
array += map(int, input().split())

sorted_array = sorted(array)
res_array = list()
for i, value in enumerate(array):
    tmp = sorted_array.index(value)
    while tmp in res_array:
        tmp += 1
    res_array.append(tmp)

res_string = ''
for value in res_array:
    res_string += str(value) + ' '
print(res_string.rstrip())