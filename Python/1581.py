input()
numbers = map(int, input().split())

count, cur_value = 1, next(numbers)
for next_value in numbers:
    if next_value == cur_value:
        count += 1
    else:
        print(count, cur_value, end=' ')
        count, cur_value = 1, next_value
print(count, cur_value)
