a = int(input())
b = int(input())
c = int(input())

minimum = min(a + b + c, a + b - c, a + b * c, a - b + c, a - b - c,
              a - b * c, a * b + c, a * b - c, a * b * c)
print(minimum)
