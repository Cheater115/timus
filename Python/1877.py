lock1 = int(input())
lock2 = int(input())
result = lock1 % 2 == 0 or lock2 % 2 != 0
print('yes' if result else 'no')
