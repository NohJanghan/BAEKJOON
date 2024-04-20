import sys
N = int(input())

meetings = []
for _ in range(N):
    meetings.append(tuple(map(int, sys.stdin.readline().rstrip().split())))

# https://www.acmicpc.net/board/view/138328
# lambda x: x[1]로는 충분하지 않음
meetings.sort(key = lambda x: (x[1], x[0]))

endtime = 0
counter = 0
for m in meetings:
    if m[0] >= endtime:
        counter += 1
        endtime = m[1]
print(counter)