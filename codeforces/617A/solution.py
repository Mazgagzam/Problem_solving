x = int(input())
count = 0
t = 5
while x > 0:
    n = x//t
    x -= n*t
    count += n
    t -= 1
print(count)
