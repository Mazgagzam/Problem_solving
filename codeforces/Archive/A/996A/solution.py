n = int(input())
count = 0
nums = [100, 20, 10, 5, 1]
    
for i in range(5):
    if n > 0:
        count += (n//nums[i])
        n -= (n//nums[i])*nums[i]

print(count)
