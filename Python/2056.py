count = int(input())
marks = list(map(int, (input() for _ in range(count))))

result = 'High'
if any(x == 3 for x in marks):
    result = 'None'
elif all(x == 5 for x in marks):
    result = 'Named'
elif 2 * sum(marks) < 9 * len(marks):
    result = 'Common'
print(result)
