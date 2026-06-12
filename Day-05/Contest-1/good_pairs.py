n, k = map(int, input().split())
a = list(map(int, input().split()))

mp = {}
count = 0

for i in range(n):
    if k == 0:
        if a[i] == 0:
            count += i
    elif a[i] % k == 0:
        req = a[i] // k
        if req in mp:
            count += mp[req]
    if a[i] in mp:
        mp[a[i]] += 1
    else:
        mp[a[i]] = 1

print(count)