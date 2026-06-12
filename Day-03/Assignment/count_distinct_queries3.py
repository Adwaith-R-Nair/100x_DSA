queries = int(input())
d = {}

for i in range (queries):
    q = list(map(int, input().split()))

    if q[0] == 1:
        if q[1] in d:
            d[q[1]] += 1
        else:
            d[q[1]] = 1
    elif q[0] == 2:
        if q[1] in d:
            d[q[1]] -= 1
            if d[q[1]] == 0:
                del d[q[1]]
    elif q[0] == 3:
        print(len(d))
    else:
        if q[1] in d:
            print("YES")
        else:
            print("NO")
        