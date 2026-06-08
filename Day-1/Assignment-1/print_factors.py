n = int(input())
ans = []

for i in range(1, int(n ** 0.5) + 1):
    if n % i == 0:
        a = i
        b = n // i
        if a == b:
            ans.append(a)
        else:
            ans.append(a)
            ans.append(b)

ans.sort()
print(ans)