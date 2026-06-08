n = int(input())
prime = 0

for x in range(2, n + 1):
    count = 0
    for i in range(1, int(x ** 0.5) + 1):
        if x % i == 0:
            a = i
            b = x // i
            if a == b:
                count += 1
            else:
                count += 2
    if count == 2:
        prime += 1

print(prime)
