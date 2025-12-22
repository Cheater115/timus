ranges = [
    (5, 'few'), (10, 'several'), (20, 'pack'), (50, 'lots'),
    (100, 'horde'), (250, 'throng'), (500, 'swarm'),
    (1000, 'zounds'), (float('inf'), 'legion')
]

count = int(input())
result = next(name for limit, name in ranges if count < limit)
print(result)
