n = int(input())
weights = list(map(int, input().split()))

total = sum(weights)
half = total // 2

reachable = 1
for w in weights:
    reachable |= reachable << w

mask = (1 << (half + 1)) - 1
reachable &= mask
max_sum = reachable.bit_length() - 1
result = total - 2 * max_sum
print(result)
