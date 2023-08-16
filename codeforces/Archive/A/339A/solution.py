s = input()

if '+' in s:
    print(*sorted(map(int, s.split('+'))), sep='+')
else:
    print(s)
