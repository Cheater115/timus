candidates, voters = map(int, input().split())

votes = [0] * candidates
for i in range(voters):
    votes[int(input()) - 1] += 1

coeff = 100 / voters
print(*(f'{x * coeff:.2f}%' for x in votes), sep='\n')
