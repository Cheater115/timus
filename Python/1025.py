count = int(input())
groups = sorted(map(int, input().split()))

half = count // 2 + 1
result = sum(x // 2 + 1 for x in groups[:half])
print(result)
