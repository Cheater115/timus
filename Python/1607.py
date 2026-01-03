start, addition, end, discount = map(int, input().split())

result = start
if start < end:
    steps = (end - start) // (discount + addition)
    start += addition * steps
    end -= discount * steps
    result = min(start + addition, end)
print(result)
