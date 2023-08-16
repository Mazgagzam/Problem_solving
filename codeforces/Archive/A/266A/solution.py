input()

s = list(input())

count = 0

for t in range(len(s)):
    if t==0:
        continue
    
    if s[t] == s[t-1]:
        s[t] = s[t-1]
        count += 1

print(count)
