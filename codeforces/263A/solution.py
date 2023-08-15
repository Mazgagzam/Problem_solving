n = [list(map(int, input().split())) for t in range(5)]

x = 0
y = 0

for j in range(5):
    if 1 in n[j]:
        x = n[j].index(1)
        y = j

print(abs(2-x)+abs(2-y))
