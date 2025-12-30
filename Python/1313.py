size = int(input())
matrix = [list(map(int, input().split())) for _ in range(size)]

row, col = 0, 0
total_elements = size * size
result = [0] * total_elements
for i in range(total_elements):
    result[i] = matrix[row][col]
    if col + 1 == size:
        col = row + 1
        row = size - 1
    elif row == 0:
        row = col + 1
        col = 0
    else:
        row -= 1
        col += 1
print(*result)
