t = int(input())

for _ in range(t):
    n = int(input())
    x = list(map(int, input().split()))
    ans = set()
    for a1 in x:
        for a2 in x:
            s = abs(a2 - a1)
            if s != 0 and not (s in ans):
                ans.add(s)
    print(len(ans))
