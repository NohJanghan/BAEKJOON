#BOJ Bronze I - 부녀회장이 될테야
import sys
input = sys.stdin.readline


testCase = int(input())

for _ in range(testCase):
    k = int(input())
    n = int(input())
    people = list()


    for i in range(k + 1):
        people.append(list())
        for j in range(1, n + 1):
            if(i == 0):
                people[i].append(j)
            
            else:
                if j == 1:
                    cell = 1
                else:
                    cell = people[i][j-2] + people[i-1][j-1]
                people[i].append(cell)
    print(people[k][n-1])