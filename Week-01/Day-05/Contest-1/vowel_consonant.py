n = int(input())
groups = {}
vowels = set('aeiou')

for i in range(n):
    s = input()
    key = "".join('V' if c in vowels else 'C' for c in s)
    if key in groups:
        groups[key].append(s)
    else:
        groups[key] = [s]

for key in sorted(groups):
    group = sorted(groups[key])
    print(" ".join(group))