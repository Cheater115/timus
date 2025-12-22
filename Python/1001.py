import sys

result = reversed(list(map(lambda x: int(x) ** 0.5, sys.stdin.read().split())))
print(*result, sep='\n')
