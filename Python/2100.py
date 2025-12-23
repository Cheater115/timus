friends = int(input())
count = 2 + friends
for _ in range(friends):
    name = input()
    if name.find('+') != -1:
        count += 1
if count == 13:
    count += 1
check = count * 100
print(check)
