# BOJ Diamond 4 - 알고스팟어
from collections import deque

# def check_existence(vertices, adj_dict):
#     for v in vertices:
#         visited = set()
#         doing = set()
#
#         stack = [v]
#         while stack:
#             vertex = stack.pop()
#             visited.add(vertex)
#             doing.add(vertex)
#
#             for u in adj_dict[vertex]:
#                 if u not in visited:
#                     stack.append(u)
#                 elif u in doing:
#                     return False
#             doing.remove(v)
#     return True

def make_graph(arr):
    assert len(arr) > 0

    vertices = set()
    adj_dict = dict()
    N = len(arr)

    vertices.update(arr[0])
    for c in arr[0]:
        if c not in adj_dict:
            adj_dict[c] = []
    before = arr[0]

    for s in arr[1:]:
        vertices.update(s)
        for c in s:
            if c not in adj_dict:
                adj_dict[c] = []

        i = 0
        while i < len(before) and i < len(s) and before[i] == s[i]:
            i += 1
        # 테스트 케이스에 aa / a같은 경우가 있음. 이 경우에는 ! 출력
        assert i < min(len(before), len(s)) or len(before) <= len(s)

        if i < len(before) and i < len(s):
            adj_dict[before[i]].append(s[i])
        before = s
    return vertices, adj_dict


def solution(ordered_arr):
    try:
        vertices, adj_dict = make_graph(ordered_arr)
    except:
        print('!')
        return
    # print(vertices)
    # print(adj_dict)
    queue = deque()
    in_degree = dict()
    for v in vertices:
        for u in adj_dict[v]:
            if u not in in_degree:
                in_degree[u] = 1
            else:
                in_degree[u] += 1

    for v in vertices:
        if v not in in_degree:
            in_degree[v] = 0
            queue.append(v)

    order = ''
    is_unique_solution = True
    while queue:
        if len(queue) > 1:
            is_unique_solution = False
        v = queue.popleft()
        order += v

        for u in adj_dict[v]:
            in_degree[u] -= 1
            if in_degree[u] == 0:
                queue.append(u)

    if len(order) == len(vertices):
        if is_unique_solution:
            print(order)
        else:
            print('?')
    else:
        print('!')
    return

if __name__ == '__main__':
    N = int(input())
    arr = []
    for _ in range(N):
        v = input()
        arr.append(v)
    solution(arr)
