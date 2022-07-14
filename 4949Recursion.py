# BOJ Silver 4 - 균형잡힌 세상
import sys
input = sys.stdin.readline

brackets = '([)]'

def isBalance(string: str) -> bool:
    char_index = -1
    string_start = -1
    count = 0
    isTrue = True
    for i, char in enumerate(string):
        if char not in brackets:
            continue

        if char_index != -1:
            if char == brackets[char_index]:
                count += 1
            elif char == brackets[char_index + 2]:
                count -= 1

            if char == brackets[char_index + 2] and count == 0:
                isTrue = isTrue and isBalance(string[string_start + 1: i])
                char_index = -1
        elif char_index == -1 and char in brackets[0:2]:
            char_index = brackets.index(char)
            string_start = i
            count += 1
        else:
            return False
    
    if char_index == -1:
        return isTrue
    else:
        return False
    




phrase = input().rstrip()
while(phrase != '.'):
    if isBalance(phrase):
        print('yes')
    else:
        print('no')
    
    phrase = input().rstrip()