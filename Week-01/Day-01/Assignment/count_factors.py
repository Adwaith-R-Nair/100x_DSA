n = int(input())
count = 0

for i in range(1, int((n ** 0.5)) + 1):
    if (n % i) == 0:
        a = i
        b = n / i
        if a == b:
            count += 1
        else:
            count += 2

print(count)