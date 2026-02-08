n = int(input())

result = ['('] * (n - 1)
for i in range(1, n + 1):
    result.append('sin(1')
    for j in range(2, i + 1):
        result.append('-' if (j % 2 == 0) else '+')
        result.append(f'sin({j}')
    result.append(')' * i)
    result.append(f'+{n + 1 - i}')
    result.append(')')
result.pop()

s = ''.join(result)
print(s)
