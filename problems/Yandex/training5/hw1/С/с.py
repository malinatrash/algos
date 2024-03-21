def solve(a):
    res = 0
    for i in a:
        if i < 4:
            if i == 3:
                res += 2
            else:
                res += i
        elif i % 4 == 0:
            res += i / 4
        elif i % 4 > 2:
            res += (i // 4 + 1) + (4 - i % 4)
        else:
            res += (i // 4) + (i % 4)
    return int(res)


if __name__ == "__main__":
    n = int(input())
    a = [int(input()) for _ in range(n)]
    print(solve(a))
