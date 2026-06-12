n , q = map(int, input().split())

s = input()
sum = 0
p = []

def isVowel(ch):
    return ch in 'aeiouAEIOU'

for i in range(0, n):
    if isVowel(s[i]):
        sum += 1
    p.append(sum)
    
for i in range(q):
    l, r = map(int, input().split())

    l -= 1
    r -= 1

    vowels = p[r] if l == 0 else p[r] - p[l - 1]
    length = r - l + 1

    print("YES" if vowels * 2 == length else "NO")