# BOJ Silver 4 - 나는야 포켓몬 마스터 이다솜
import sys
input = sys.stdin.readline

N, M = map(int, input().split())

book_dict = dict()
book_list = list()

book_list.append(None)
for i in range(N):
    x = input().strip()
    book_dict[x] = i+1
    book_list.append(x)

output_list = []
for _ in range(M):
    x = input().strip()
    try:
        x2int = int(x)
        output_list.append(book_list[x2int])
    except ValueError:
        output_list.append(book_dict[x])

print(*output_list, sep=('\n'))