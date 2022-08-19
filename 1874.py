# BOJ Silver 2 - 스택 수열
import sys
input = sys.stdin.readline

N = int(input())
sequence = list()
for i in range(N):
    sequence.append(int(input()))

result = list()
stack= list()
poped = list()

n = 1
stack.append(n)
n += 1
result.append('+')

i = 0
while poped != sequence:

    if len(stack) > 0 and stack[-1] == sequence[i]:
        poped.append(stack.pop())
        result.append('-')
        i += 1
    else:
        if n > N:
            break
        stack.append(n)
        n += 1

        result.append('+')

if poped == sequence:
    for i in result:
        print(i)
else:
    print('NO')

# if poped != sequence:
#     print('NO')

# print(result)