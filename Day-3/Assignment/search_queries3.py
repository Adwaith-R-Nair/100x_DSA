n, q = map(int, input().split())

a = list(map(int, input().split()))

for i in range (q):
    x = int(input())
    if x in a:
        print(a.index(x) + 1)
    else:
        print(-1)