n, k, m = map(int, input().split())

detal_count = 0
splav_remain = n % k
if splav_remain == 0:
    zagotovki_count = n / k
    zagotovka_kg_remain = k * zagotovki_count
    detal_count = 0
    while zagotovka_kg_remain > m:
        zagotovka_kg_remain -= k
        detal_count += k // m
else:
    while n >= k:
        splav_remain = n % k
        zagotovki_count = splav_remain / k
        zagotovka_kg_remain = k * zagotovki_count
        while zagotovka_kg_remain > m:
            zagotovka_kg_remain -= k
            detal_count += k // m
print(detal_count)
