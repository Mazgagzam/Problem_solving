n, k = map(int, input().split())

a = list(map(int, input().split()))

count = 0

for t in a:
    if a[k-1] <= t and t>0:
        count += 1 
        
print(count)
