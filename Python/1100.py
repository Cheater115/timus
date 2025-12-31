import sys
import array

size = int(sys.stdin.readline())

ids = array.array('i', [0]) * size
counts = array.array('i', [0]) * size
for i in range(size):
    id, cnt = map(int, sys.stdin.readline().split())
    ids[i] = id
    counts[i] = cnt

indices = list(range(size))
indices.sort(key=lambda i: counts[i], reverse=True)
for i in indices:
    sys.stdout.write(f'{ids[i]} {counts[i]}\n')
