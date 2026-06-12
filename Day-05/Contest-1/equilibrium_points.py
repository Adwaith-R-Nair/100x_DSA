n = int(input())
a = list(map(int, input().split()))

s = 0
p = []
for x in a:
    s += x
    p.append(s)

total = p[-1]
count = 0

for i in range(n):
    l  = p[i]
    r = total - (p[i - 1] if i > 0 else 0)
    if l == r:
        count += 1

print(count)
