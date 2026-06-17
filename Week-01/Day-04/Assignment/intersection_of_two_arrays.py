n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

s = set()
ans = set()

for i in a:
    s.add(i)

for i in b:
    if i in s:
        ans.add(i)

if len(ans) > 0:
    print(len(ans))
    print(" ".join(map(str, sorted(ans))))
else:
    print(0)
    print()