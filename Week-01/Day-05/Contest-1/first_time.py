import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

seen = set()
ans = []
for i in a:
    if i in seen:
        ans.append("NO")
    else:
        ans.append("YES")
        seen.add(i)

print(" ".join(ans))