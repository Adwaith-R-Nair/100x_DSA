n, q = map(int, input().split())
a = list(map(int, input().split()))

p = []
sum = 0

for i in range(n):
   if i % 2 == 0:
       sum += a[i]
       p.append(sum)
   else:
       sum -= a[i]
       p.append(sum)
       

for i in range(q):
    l, r = map(int, input().split())
    l -= 1
    r -= 1

    if (l == 0):
        ans = p[r]
    else:
        ans = p[r] - p[l - 1]

    if l % 2 == 1:
        ans = -ans

    print(ans)