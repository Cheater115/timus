import math

def check(x):
    number = x * 8 - 7
    root = math.isqrt(number)
    return root * root == number

amount = int(input())
result = ' '.join('1' if check(int(input())) else '0' for _ in range(amount))
print(result)
