n = int(input())

for t in range(1, 10000):
    num = str(n+t)
    if len(set(num)) == len(num):
        print(num)
        break
