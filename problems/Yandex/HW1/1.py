t1, t2 = map(int, input().split())
mode = input()

if not t1 or not t2:
    print('')
elif mode == 'heat':
    print(max(t1, t2))
elif mode == 'freeze':
    print(min(t1, t2))
elif mode == 'auto':
    print(t2)
else:
    print(t1)
