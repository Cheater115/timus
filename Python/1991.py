blocks, count_per_blocks = map(int, input().split())
carts = list(map(int, input().split()))

booms_filter = lambda x: x > count_per_blocks
droids_filter = lambda x: x < count_per_blocks
booms = sum(x - count_per_blocks for x in filter(booms_filter, carts))
droids = sum(count_per_blocks - x for x in filter(droids_filter, carts))
print(booms, droids)
