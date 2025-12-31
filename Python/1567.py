def letterToClicks(c: str):
    if 'a' <= c <= 'z':
        return (ord(c) - ord('a')) % 3 + 1
    if c == '.' or c == ' ':
        return 1
    if c == ',':
        return 2
    if c == '!':
        return 3
    return 0

line = input()
count = sum(map(letterToClicks, line))
print(count)
