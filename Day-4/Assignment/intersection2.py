n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

mpA = {}
mpB = {}
ans = []
count = 0

for i in a:
    if i in mpA:
        mpA[i] += 1
    else:
        mpA[i] = 1

for i in b:
    if i in mpB:
        mpB[i] += 1
    else:
        mpB[i] = 1

for key, value in mpA.items():
    if key in mpB:
        count = min(value, mpB[key])

        for i in range(count):
            ans.append(key)

print(len(ans))
print(" ".join(map(str, sorted(ans))))