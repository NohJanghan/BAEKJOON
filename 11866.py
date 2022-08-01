# BOJ Silver 5 - 요세푸스 문제 0
N, K = map(int, input().split())

numbers = list(range(1, N + 1))

output = []
cursor = 0
i = 0
while len(numbers) > 0:
    cursor = (cursor + K - 1) % (N - i)
    output.append(numbers.pop(cursor))
    i += 1


for i, data in enumerate(output):
    if i == 0:
        result = '<' + str(data)
    else:
        result += ', ' + str(data)
result += '>'

print(result)