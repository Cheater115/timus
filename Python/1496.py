from collections import Counter

count = int(input())
names = [input() for _ in range(count)]
counter_names = Counter(names)
filter_names = filter(lambda x: x[1] > 1, counter_names.items())
print(*(t[0] for t in filter_names), sep='\n')
