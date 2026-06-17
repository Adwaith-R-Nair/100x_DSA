def isVowel(ch):
    return ch in 'aeiouAEIOU'

n = int(input())
a = input()

q = int(input())
p = []
sum = 0

for i in range(0, n):
    if isVowel(a[i]):
        sum += 1
    p.append(sum)

for i in range(q):
    l, r = map(int, input().split())
    l -= 1
    r -= 1

    if l == 0:
        print(p[r])
    else:
        print(p[r] - p[l - 1])
