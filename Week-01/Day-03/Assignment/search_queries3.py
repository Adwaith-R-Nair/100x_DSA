n, q = map(int, input().split())

a = list(map(int, input().split()))

d = {}

for i in range(len(a)):
    d[a[i]] = i + 1

for i in range (q):
    x = int(input())
    if x in d:
        print(d[x])
    else:
        print(-1)