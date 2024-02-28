n = int(input())
ls = list(map(int,input().split()))

for i in range(len(ls)):
	ls.remove(0)
	ls.append(0)

print(' '.join(str(x) for x in ls))