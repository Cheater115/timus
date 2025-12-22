count = int(input())
if count < 5:
    result = 'few'
elif count < 10:
    result = "several"
elif count < 20:
    result = "pack"
elif count < 50:
    result = "lots"
elif count < 100:
    result = "horde"
elif count < 250:
    result = "throng"
elif count < 500:
    result = "swarm"
elif count < 1000:
    result = "zounds"
else:
    result = "legion"
print(result)
