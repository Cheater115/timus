number = input()
sum_digits = sum(int(d) for d in number)
mod = sum_digits % 3
if mod != 0:
    print(f'1\n{mod}')
else:
    print('2')
