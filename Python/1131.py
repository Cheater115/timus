import math

computers, connectors = map(int, input().split())

base_tm = math.ceil(math.log2(connectors))
base_count = 1 << base_tm

result = base_tm
if base_count >= computers:
    result = math.ceil(math.log2(computers))
else:
    remaining = computers - base_count
    result += (remaining + connectors - 1) // connectors
print(result)
