n = int(input())
result = n * (n + 1) // 2 if n > 0 else n * (1 - n) // 2 + 1
print(result)
