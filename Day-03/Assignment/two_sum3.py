n, x = map(int, input().split())

a = list(map(int, input().split()))
mp = {}
count = 0

for i in range(n):
    req = x - a[i]
    if req in mp:
        count += mp[req]
    if a[i] in mp:
        mp[a[i]] += 1
    else:
        mp[a[i]] = 1

print(count)
