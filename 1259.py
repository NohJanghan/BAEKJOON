#BOJ Bronze I - 팰린드롬수
#난이도보다 쉬움
message = ' '

while True:
    message = input()
    if message == '0':
        break
    
    isPalindrome = True

    for i in range(len(message) // 2): #만약 길이가 7이면 3번 반복
        if(message[i] != message[-1-i]):
            isPalindrome = False
    
    if isPalindrome:
        print("yes")
    else:
        print("no")
