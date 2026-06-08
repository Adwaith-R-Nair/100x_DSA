q = int(input())

for i in range (q):
    l, r = map(int, input().split())

    ans = (r * (r + 1) // 2) - ((l - 1) * l // 2)
    print(ans)