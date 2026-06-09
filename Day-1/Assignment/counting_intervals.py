q = int(input())

for i in range(q):
    t , l , r = map(int, input().split())

    if l > r:
        print(0)
    else:
        if t == 1:
            if r == l:
                print(0)
            else:
                print(r - l - 1)
        elif t == 2:
            print(r - l)
        elif t == 3:
            print(r - l)
        elif t == 4:
            print(r - l + 1)