q = int(input())
d = {}

for i in range (q):
    t, x = map(int, input().split())

    if t == 1:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    elif t == 2:
        if x in d and d[x] > 0:
            d[x] -= 1
    else:
        if x in d:
            print(d[x])
        else:
            print(0)
