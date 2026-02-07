import sys

def countDistance(rows: int, cols: int, block_grid) -> int:
    SIDE = 100.0
    DIAG = 141.4213562373095

    prev = [SIDE * i for i in range(cols + 1)]
    curr = [0.0] * (cols + 1)
    for i in range(1, rows + 1):
        curr[0] = prev[0] + SIDE
        row_blocks = block_grid[i]
        for j in range(1, cols + 1):
            best = min(curr[j - 1], prev[j]) + SIDE
            if row_blocks[j]:
                best = min(prev[j - 1] + DIAG, best)
            curr[j] = best
        prev, curr = curr, prev
    return int(prev[cols] + 0.5)

data = sys.stdin.buffer.read().split()
rows = int(data[0])
cols = int(data[1])
count_blocks = int(data[2])
block_grid = [bytearray(cols + 1) for _ in range(rows + 1)]
for i in range(3, 2 * count_blocks + 3, 2):
    x = int(data[i])
    y = int(data[i + 1])
    block_grid[x][y] = 1
print(countDistance(rows, cols, block_grid))
