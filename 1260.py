# BOJ Silver 2
from collections import deque
def bfs(adj_list, v_num, start):
    visited = [False] * len(adj_list)
    queue = deque()

    queue.append(start)
    result = []
    visited[start] = True
    while queue:
        v = queue.popleft()
        result.append(v)

        for u in adj_list[v]:
            if not visited[u]:
                queue.append(u)
                visited[u] = True
    return result


def dfs(adj_list, v_num, start):
    stack = [start]
    visited = [False] * len(adj_list)

    result = []
    while stack:
        v = stack.pop()
        if visited[v]:
            continue
        else:
            visited[v] = True
        result.append(v)

        for u in adj_list[v][::-1]:
            if not visited[u]:
                stack.append(u)
    return result

## by recursion
# def dfs(adj_list, v_num, start):
#     visited = [False] * len(adj_list)
#     result = []
#
#     def inner(v):
#         visited[v] = True
#         # pre-order
#         result.append(v)
#
#         for u in adj_list[v]:
#             if not visited[u]:
#                 inner(u)
#     inner(start)
#     return result


if __name__ == '__main__':
    v_num, e_num, start = map(int, input().split())
    adj_list = [[] for _ in range(v_num + 1)]
    for _ in range(e_num):
        source, dest = map(int, input().split())
        adj_list[source].append(dest)
        adj_list[dest].append(source)

    for i in range(len(adj_list)):
        adj_list[i].sort()
    print(* dfs(adj_list, v_num, start))
    print(* bfs(adj_list, v_num, start))