#BOJ Bronze I - 단어공부
message = input()
message = message.upper()
array = list(0 for _ in range(26)) #store A to Z

#calc weight
for i in range(len(message)) : 
    array[ord(message[i]) - ord('A')] += 1

#find index of max weight
res = 0
resValue = 0
for i in range(26):
    if (array[i] > resValue):
        res = chr(ord('A') + i)
        resValue = array[i]
    elif (array[i] == resValue):
        res = '?' #idk
    else:
        continue

print(res)