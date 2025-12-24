input()
first = list(map(int, input().split()))
input()
second = list(map(int, input().split()))
input()
third = list(map(int, input().split()))

count = 0
fi, si, ti = 0, 0, 0
while fi < len(first) and si < len(second) and ti < len(third):
    a = first[fi]
    b = second[si]
    c = third[ti]
    if a == b and b == c:
        count += 1
        fi += 1
        si += 1
        ti += 1
    elif a <= b and a <= c:
        fi += 1
    elif b <= a and b <= c:
        si += 1
    else:
        ti += 1
print(count)
