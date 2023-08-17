s = input()[1:-1].replace(' ', '')

if ',' not in s:
    if s == '':
        print(0)
    else:
        print(1)
else:
    s = s.split(',')

    print(len(set(s)))
