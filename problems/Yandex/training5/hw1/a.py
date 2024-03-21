p, v = map(int, input().split())
q, m = map(int, input().split())

len_p = (p + v) - (p - v) + 1
len_m = (q + m) - (q - m) + 1
len_insctn = len(range(max(p - v, q - m), min(p + v, q + m) + 1))

print(len_p + len_m - len_insctn)

