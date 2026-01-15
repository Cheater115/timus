number, exclamations = input().split()
number = int(number)
step = len(exclamations)

result = 1
for i in range(number, 0, -step):
    result *= i
print(result)
