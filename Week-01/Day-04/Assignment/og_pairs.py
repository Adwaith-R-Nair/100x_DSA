s = input()

ans = 0
countO = 0

for i in range(len(s)):
    if(s[i] == 'G'):
        ans += countO
    elif(s[i] == 'O'):
        countO += 1

print(ans)