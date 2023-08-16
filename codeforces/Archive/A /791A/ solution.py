a, b = map(int, input().split())

year = 1
while a <= b:
    a  *= 3
    b *= 2
    year+=1

print(year-1)
