size = int(input())
curr, next = 2, 2
for _ in range(1, size):
    curr, next = next, curr + next
print(curr)
