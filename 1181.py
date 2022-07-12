#BOJ Silver V - 단어 정렬

N = int(input())

arr = list()
maxLenOfStr = 0
for i in range(N):
    arr.append(input())
    if(len(arr[-1]) > maxLenOfStr):
        maxLenOfStr = len(arr[-1])

sentenseSet = set(arr)
arr = list(sentenseSet)

resArr = list()
lenghtDict = dict()
for i in range(1, maxLenOfStr + 1):
    for j in range(len(arr)):
        if (len(arr[j]) == i):
            if(i in lenghtDict):
                lenghtDict[i].append(arr[j])
            else:
                lenghtDict[i] = list()
                lenghtDict[i].append(arr[j])

    if(i in lenghtDict):
        lenghtDict[i].sort()
        resArr += lenghtDict[i]

for i in resArr:
    print(i)
