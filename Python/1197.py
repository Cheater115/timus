SIZE = 8
DX = [-2, -1, 1, 2, 2, 1, -1, -2]
DY = [1, 2, 2, 1, -1, -2, -2, -1]

def isValid(x, y):
    return 0 <= x < SIZE and 0 <= y < SIZE

def runTest():
    cell = input()
    x = ord(cell[0]) - ord('a')
    y = int(cell[1]) - 1
    cnt = 0
    for dx, dy in zip(DX, DY):
        cnt += int(isValid(x + dx, y + dy))
    print(cnt)

tests = int(input())
for _ in range(tests):
    runTest()
