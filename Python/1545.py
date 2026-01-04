from collections import defaultdict

count = int(input())
hieroglyphs = defaultdict(list)
for _ in range(count):
    hierogl = input()
    first = hierogl[0]
    second = hierogl[1]
    hieroglyphs[first].append(second)

start = input()
print(*(start + c for c in hieroglyphs[start]), sep='\n')
