steaks, pan_capacity = map(int, input().split())

result = 2
if steaks > pan_capacity:
    steak_sides = 2 * steaks
    # same as math.ceil(steak_sides // pan_capacity)
    result = (steak_sides + pan_capacity - 1) // pan_capacity
print(result)
