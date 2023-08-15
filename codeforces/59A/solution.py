s = input()

x = 0
y = 0
for t in s:
    if t.isupper():
        x+=1
    else:
        y += 1

print(s.upper() if x>y else s.lower())
