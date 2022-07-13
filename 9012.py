#BOJ Silver 4 - 괄호
import sys

input = sys.stdin.readline
T = int(input())

phrases = list()
for i in range(T):
    phrases.append(input().rstrip())

def isVPS(string: str):
    count = 0
    for char in string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        
        if count < 0:
            return False
    if count != 0:
        return False
    else:
        return True

for i in phrases:
    if isVPS(i):
        print('YES')
    else:
        print('NO')
        