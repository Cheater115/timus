size = int(input())
array = list(map(int, input().split()))

max_number = 2
max_sum = array[0] + array[1] + array[2]
cur_sum = max_sum
for i in range(3, size):
    cur_sum += array[i] - array[i - 3]
    if max_sum < cur_sum:
        max_sum = cur_sum
        max_number = i
print(max_sum, max_number)
