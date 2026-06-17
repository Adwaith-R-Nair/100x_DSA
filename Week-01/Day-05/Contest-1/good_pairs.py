n, k = map(int, input().split())
a = list(map(int, input().split()))

mp = {}
count = 0

for j in range(n):
    if k == 0:
        if a[j] == 0:
            count += j
    elif a[j] % k == 0:
        req = a[j] // k
        if req in mp:
            count += mp[req]
    if a[j] in mp:
        mp[a[j]] += 1
    else:
        mp[a[j]] = 1

print(count)