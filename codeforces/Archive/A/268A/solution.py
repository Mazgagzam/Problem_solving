n = int(input())

h = []

for t in range(n):
    h.append(list(map(int, input().split())))

count = 0

for i in range(n):
    for y in range(n):
        if y != i:
            if h[i][0] == h[y][1]:
                count += 1

print(count)
