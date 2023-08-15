n = int(input())

def foo(n):
    if n % 2 == 0:
        print(int(n / 2))  
    else:
        a = n // 2
        print((n - a) * -1)

foo(n)
