def rightSum(number):
    number %= 1000
    return number // 100 + number // 10 % 10 + number % 10

def leftSum(number):
    return rightSum(number // 1000)

number = int(input())
flag = False
if abs(leftSum(number) - rightSum(number)) == 1:
    flag = leftSum(number + 1) == rightSum(number + 1) \
        or leftSum(number - 1) == rightSum(number - 1)
print('Yes' if flag else 'No')
