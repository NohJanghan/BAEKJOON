import collections
N, K = map(int, input().split())

def solution(n, k):
    if n >= k:
        return n - k
    queue = collections.deque()
    
    queue.appendleft((n, 0))
    visited = {n}
    # pos = n
    # count = 0
    # while pos * 2 <= k:
    #     pos *= 2
    #     count += 1
    # queue.appendleft((pos, count))
    while queue:
        pos, count = queue.pop()

        if pos == k:
            return count
        elif pos == 0:
            if pos + 1 not in visited:
                visited.add(pos + 1)
                queue.appendleft((pos + 1, count + 1))
        elif pos < k:
            if pos + 1 not in visited:
                visited.add(pos + 1)
                queue.appendleft((pos + 1, count + 1))
            if pos - 1 not in visited:
                visited.add(pos - 1)
                queue.appendleft((pos - 1, count + 1))
            if pos * 2 not in visited:
                visited.add(pos * 2)
                queue.appendleft((pos * 2, count + 1))
            
        else:
            if pos - 1 not in visited:
                visited.add(pos - 1)
                queue.appendleft((pos - 1, count + 1))

print(solution(N, K))