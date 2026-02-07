from math import gcd

rows, cols = map(int, input().split())
result = rows - 1 + cols - 1 - gcd(rows - 1, cols - 1)
print(result)
