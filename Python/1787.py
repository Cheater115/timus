turn_cars, _ = map(int, input().split())
arrived_cars = list(map(int, input().split()))

cars = 0
for arrives in arrived_cars:
    cars = max(cars + arrives - turn_cars, 0)
print(cars)
