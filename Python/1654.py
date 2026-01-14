line = input()
stack = []
for c in line:
    if not stack or stack[-1] != c:
        stack.append(c)
    else:
        stack.pop()
result = ''.join(stack)
print(result)
