a, b = map(int, input().split())
ans1 = []
ans2 = []

for i in range(1, int(a ** 0.5) + 1):
    if a % i == 0:
        x = i
        y = a // i
        if x == y:
            ans1.append(x)
        else:
            ans1.append(x)
            ans1.append(y)

for i in range(1, int(b ** 0.5) + 1):
    if b % i == 0:
        x = i
        y = b // i
        if x == y:
            ans2.append(x)
        else:
            ans2.append(x)
            ans2.append(y)


len_1 = len(ans1)
len_2 = len(ans2)

if len_1 > len_2:
    print("A")
elif len_2 > len_1:
    print("B")
else:
    print("DRAW")
