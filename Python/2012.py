MINUTES_PER_PROBLEM = 45
MINUTES_PER_HOUR = 60
HOURS = 5
TOTAL_PROBLEMS = 12

solved_problems = int(input())

total_minutes = HOURS * MINUTES_PER_HOUR
available_minutes = total_minutes - MINUTES_PER_HOUR
need_minutes = (TOTAL_PROBLEMS - solved_problems) * MINUTES_PER_PROBLEM
result = need_minutes <= available_minutes
print('YES' if result else 'NO')
