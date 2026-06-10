n, x = map(int, input().split())

a = list(map(int, input().split()))

s = set()
found = "FALSE"

for i in range (n):
    req = x - a[i]
    if req in s:
        found = "TRUE"
        break
    s.add(a[i])

print(found)