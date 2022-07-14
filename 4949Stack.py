## BOJ Silver 4 - 균형잡힌 세상 using Stack
import sys
input = sys.stdin.readline

brackets = '([)]'

while True:
    phrase = input().rstrip()
    if phrase == '.':
        break
    
    stack = []
    flag = True
    for char in phrase:
        if flag == False:
            break
        elif char not in brackets:
            continue

        
        bracket_id = brackets.index(char)
        if bracket_id < 2:
            stack.append(bracket_id)
        else:
            try:
                last = stack.pop()
            except:
                flag = False

            if last == bracket_id - 2:
                pass
            else:
                flag = False
    if flag == True and len(stack) == 0:
        print('yes')
    else:
        print('no')