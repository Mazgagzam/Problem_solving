n, k = map(int, input().split())

for _ in range(k):
    if str(n)[-1] == '0':
        n //= 10
    else:
        n -= 1

print(n)
