#BOJ Bronze 1 - 유진수

input_string = input()
number = list()
for i in input_string:
    number.append(int(i))

def mul(arr: list):
    res = 1
    for value in arr:
        res *= value
    return res

for i in range(1, len(number)):
    before = mul(number[:i])
    after = mul(number[i:])
    if before == after:
        result = 'YES'
        break
else:
    result = 'NO'

print(result)