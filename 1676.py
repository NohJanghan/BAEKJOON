# BOJ Silver 5 - 팩토리얼 0의 개수
number = int(input())


res = 0
count2 = 0
count5 = 0
for num in range(number, 0, -1):

    while num % 2 == 0:
        num /= 2
        count2 += 1
    while num % 5 == 0:
        num /= 5
        count5 += 1

print(min(count2, count5))

