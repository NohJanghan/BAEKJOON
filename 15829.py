#BOJ bronze 2 - Hashing
M = 1234567891
r = 31

length = int(input())
sentense = input()

encoded_sentense = []
for char in sentense:
    encoded_sentense.append(ord(char) - ord('a') + 1)

# print(encoded_sentense)

res = 0
for i in range(length):
    res += int(encoded_sentense[i]) * (r ** i)
res %= M

print(res)