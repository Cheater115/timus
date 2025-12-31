left = set(("Alice", "Ariel", "Aurora",
            "Phil", "Peter", "Olaf",
            "Phoebus", "Ralph", "Robin"))
center = set(("Bambi", "Belle", "Bolt",
              "Mulan", "Mowgli", "Mickey",
              "Silver", "Simba", "Stitch"))
right = set(("Dumbo", "Genie", "Jiminy",
             "Kuzko", "Kida", "Kenai",
             "Tarzan", "Tiana", "Winnie"))

letters = int(input())
cur_pos = 0
steps = 0
for _ in range(letters):
    name = input()
    next_pos = cur_pos
    if name in left:
        next_pos = 0
    elif name in center:
        next_pos = 1
    elif name in right:
        next_pos = 2
    steps += abs(cur_pos - next_pos)
    cur_pos = next_pos
print(steps)
