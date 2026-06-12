n, q = map(int, input().split())
a = list(map(int, input().split()))

p = []
sum = 0

for i in range(0, n):
    sum += a[i] * a[i]
    p.append(sum)

for i in range(q):
    l, r = map(int, input().split())
    l -= 1
    r -= 1

    if (l == 0):
        print(p[r])
    else:
        print(p[r] - p[l - 1])