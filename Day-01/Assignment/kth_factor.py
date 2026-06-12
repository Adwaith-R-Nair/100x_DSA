n, k = map(int, input().split())
ans = []
count = 0

for i in range(1, int(n ** 0.5) + 1):
    if n % i == 0:
        a = i
        b = n // i
        if a == b:
            ans.append(a)
            count += 1
        else:
            ans.append(a)
            ans.append(b)
            count += 2

ans.sort()
if k > count:
    print(-1)
else:
    print(ans[k-1])