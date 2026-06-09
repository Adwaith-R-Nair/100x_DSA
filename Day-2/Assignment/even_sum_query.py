n = int(input())
a = list(map(int, input().split()))

q = int(input())

p = []
sum = 0
for i in range(0, n):
    if i % 2 == 1:
        sum += a[i]
        p.append(sum)
    else:
        sum += 0
        p.append(sum)

for i in range(q):
    l, r = map(int, input().split())

    l -= 1
    r -= 1

    if l == 0:
        print(p[r])
    else:
        print(p[r] - p[l - 1])