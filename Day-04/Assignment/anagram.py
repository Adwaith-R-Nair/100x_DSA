n = int(input())
groups = {}

for i in range(n):
    s = input()
    key = "".join(sorted(s))
    if key in groups:
        groups[key].append(s)
    else:
        groups[key] = [s]

print(len(groups))

for key in sorted(groups):
    group = sorted(groups[key])
    print(len(group), " ".join(group))