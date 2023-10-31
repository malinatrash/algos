t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    count_map = {}

    for i in range(len(a)):
        if a[i] in count_map:
            count_map[a[i]] += 1
        else:
            count_map[a[i]] = 1

    for i in range(len(a)):
        if count_map[a[i]] == 1:
            print(i + 1)
            break
