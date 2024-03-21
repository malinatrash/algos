def solve(m1t1, m1t2, m2t1, m2t2, m1gg):
    m1g = False if m1gg == 1 else True

    tt1 = m1t1 + m2t1
    tt2 = m1t2 + m2t2

    if tt1 == tt2:
        if m1g:
            if m1t1 > m2t2:
                return 0
            else:
                return 1
        else:
            if m2t1 > m1t2:
                return 0
            else:
                return 1

    if tt1 < tt2:
        if m1g:
            if m1t1 > m2t2:
                return tt2 - tt1
            else:
                return tt2 - tt1 + 1
        else:
            if m2t1 > m1t2:
                return tt2 - tt1
            else:
                if m1t1 <= m1t2:
                    return tt2 - tt1
                else:
                    return tt2 - tt1 + 1

    if tt1 > tt2:
        return 0

#
m1t1s, m1t2s = map(int, input().split(":"))
m2t1s, m2t2s = map(int, input().split(":"))
m1gs = int(input())

print(solve(m1t1s, m1t2s, m2t1s, m2t2s, m1gs))
