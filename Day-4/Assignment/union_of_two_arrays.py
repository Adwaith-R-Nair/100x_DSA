n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

s = set()
for i in a:
    if i not in s:
        s.add(i)

for i in b:
    if i not in s:
        s.add(i)
s= sorted(s)

if len(s) > 0:
    print(len(s))
    print(" ".join(map(str, s)))
else:
    print(0)
    print(s)