from collections import deque

def split(graph: list[list[int]]) -> list[int]:
    group = []
    used = [False] * len(graph)
    queue = deque()
    for i in range(len(graph)):
        if used[i]:
            continue
        queue.append((i, 0))
        used[i] = True
        while len(queue) != 0:
            vertex, level = queue.popleft()
            if level == 0:
                group.append(vertex)
            for neighbour in graph[vertex]:
                if not used[neighbour]:
                    queue.append((neighbour, 1 - level))
                    used[neighbour] = True
    return group

vertexes = int(input())
toInt = lambda x: int(x) - 1
graph = [list(map(toInt, input().split()[:-1])) for _ in range(vertexes)]

group = split(graph)
print(len(group))
print(*map(lambda x: x + 1, group))
