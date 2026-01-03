s = int(input())
double_s = s + s
limit = int(double_s ** 0.5)
for n in range(limit, 0, -1):
    if double_s % n != 0:
        continue
    k = double_s // n
    if k <= n or k % 2 == n % 2:
        continue
    a = (k - n + 1) // 2
    break
print(a, n)
