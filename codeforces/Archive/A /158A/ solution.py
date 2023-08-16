n, k = map(int, input().split())

a = list(map(int, input().split()))

count = sum(1 for t in a if a[k-1] <= t and t>0)
print(count)
