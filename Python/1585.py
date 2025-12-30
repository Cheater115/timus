n = int(input())
counter = dict.fromkeys(
    ('Emperor Penguin', 'Little Penguin', 'Macaroni Penguin'), 0)
for _ in range(n):
    title = input()
    counter[title] += 1
result = max(counter, key=counter.get)
print(result)
