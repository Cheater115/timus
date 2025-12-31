size = int(input())
matrix = [[0] * size for _ in range(size)]

row = 0
col = size - 1
for value in range(1, size * size + 1):
    matrix[row][col] = value
    if row == size - 1:
        row = (size - 1) - (col - 1)
        col = 0
    elif col == size - 1:
        col = (size - 1) - (row + 1)
        row = 0
    else:
        row += 1
        col += 1

for row in matrix:
    line = ' '.join(str(x) for x in row)
    print(line)
