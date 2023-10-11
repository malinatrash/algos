a = int(input())
b = int(input())
c = int(input())


def solve():
    if c < 0:
        print('NO SOLUTION')
        return
    elif a == 0:
        if b == c * c:
            print('MANY SOLUTIONS')
        else:
            print('NO SOLUTION')
        return
    else:
        x = (c * c - b) / a
        print(x)


solve()
