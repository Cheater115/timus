count = int(input())
shops = set((input() for _ in range(count)))
answer = count - len(shops)
print(answer)
