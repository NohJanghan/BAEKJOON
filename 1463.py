import collections
N = int(input())

def find_solution(n):
    # if n <= 1:
    #     return 0
    # if n in history:
    #     return history[n]
    
    # nominee = {find_solution(n - 1)}
    # if n % 2 == 0:
    #     nominee.add(find_solution(n // 2))
    # if n % 3 == 0:
    #     nominee.add(find_solution(n // 3))

    # history[n] = 1 + min(nominee)
    # return history[n]

    if n <= 1:
        return 0

    queue = collections.deque()
    queue.append(n)
    dest = {n: 0}
    while queue and 1 not in dest:
        i = queue.popleft()

        if i % 3 == 0 and i // 3 not in dest:
            queue.append(i // 3)
            dest[i // 3] = dest[i] + 1
        if i % 2 == 0 and i // 2 not in dest: # elif 로 바꿔도 될거같은데 증명 못함
            queue.append(i // 2)
            dest[i // 2] = dest[i] + 1
        if i - 1 not in dest:
            queue.append(i - 1)
            dest[i - 1] = dest[i] + 1

    return dest[1]

print(find_solution(N))