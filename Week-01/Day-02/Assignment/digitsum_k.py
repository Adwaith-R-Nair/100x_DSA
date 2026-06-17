def digitSum(n):
    dig = 0
    while(n):
        a = n % 10
        dig += a
        n //= 10
    return dig

n, q ,k = map(int, input().split())
a = list(map(int, input().split()))

p = []
sum = 0

for i in range(0, n):
    if (digitSum(a[i]) == k):
        sum += 1
    p.append(sum)

for i in range(q):
    l, r = map(int, input().split())
    l -= 1
    r -= 1

    if (l == 0):
        print(p[r])
    else:
        print(p[r] - p[l - 1])