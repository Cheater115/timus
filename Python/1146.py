import sys

def findMaxSum(arr: list[int]) -> int:
    result = arr[0]
    curr = 0
    for x in arr:
        curr = x if curr < 0 else curr + x
        if curr > result:
            result = curr
    return result

data = sys.stdin.read().split()
it = iter(data)
size = int(next(it))
matr = [[int(next(it)) for _ in range(size)] for _ in range(size)]

max_sum = matr[0][0]
for top in range(size):
    arr = [0] * size
    for bottom in range(top, size):
        row_bottom = matr[bottom]
        for i in range(size):
            arr[i] += row_bottom[i]
        max_block_sum = findMaxSum(arr)
        max_sum = max(max_sum, max_block_sum)
print(max_sum)
