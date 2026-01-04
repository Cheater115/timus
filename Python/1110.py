def binPowMod(x, n, mod):
    if x == 0:
        return 0
    res = 1
    a = x
    while n != 0:
        if (n & 1) == 1:
            res = (res * a) % mod
        a = (a * a) % mod
        n >>= 1
    return res

n, m, y = map(int, input().split())
answer = [x for x in range(m) if binPowMod(x, n, m) == y]
if not answer:
    answer.append(-1)
print(*answer)
