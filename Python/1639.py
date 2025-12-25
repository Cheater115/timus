n, m = map(int, input().split())
steps = n * m - 1
print('[:=[first]' if steps % 2 != 0 else '[second]=:]')
