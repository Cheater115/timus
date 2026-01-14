seat_number = input()

letter = seat_number[-1]
number = int(seat_number[:-1])

result = 'aisle'
if letter == 'A' or (number <= 2 and letter == 'D') \
        or (3 <= number <= 20 and letter == 'F') \
        or (21 <= number and letter == 'K'):
    result = "window"
elif 21 <= number and  letter in 'BEFJ':
    result = "neither"
print(result)
