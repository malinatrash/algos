n, k, m = map(int, input().split())


def solve(n, k, m):
    detal_count = 0
    if n == 0 or k == 0 or m == 0:
        print(0)
        return
    if n % k == 0:
        zagotovki_count = n / k
        zagotovka_kg_remain = k * zagotovki_count
        detal_count = 0
        while zagotovka_kg_remain > m:
            zagotovka_kg_remain -= k
            detal_count += k // m
    else:
        while n >= k:
            zagotovki_count = n // k
            n %= k
            zagotovka_kg_remain = k * zagotovki_count
            while zagotovka_kg_remain > m:
                zagotovka_kg_remain -= k
                detal_count += k // m
                n += k % m
            n += zagotovka_kg_remain
    print(detal_count)


solve(n, k, m)
