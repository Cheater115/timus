import bisect
import sys

nrecords = int(sys.stdin.readline())
teacher_years = [int(sys.stdin.readline()) for _ in range(nrecords)]

years = int(sys.stdin.readline())
count = 0
for _ in range(years):
    year = int(sys.stdin.readline())
    index = bisect.bisect_left(teacher_years, year)
    if index != len(teacher_years) and teacher_years[index] == year:
        count += 1
print(count)
