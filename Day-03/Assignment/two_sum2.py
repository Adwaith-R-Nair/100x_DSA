n, x = map(int, input().split())

a = list(map(int, input().split()))
mp = {}

for i in range (n):
    req = x - a[i]
    if req in mp:
        print(mp[req] + 1, i + 1)
        break
    mp[a[i]] = i
else:
    print(-1)
