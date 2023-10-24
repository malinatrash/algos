k, r = map(int, input().split())

for x in range(1, 11):
    if (x * k) % 10 == 0 or (x * k) % 10 == r:
        print(x)
        break
