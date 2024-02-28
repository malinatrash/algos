n = int(input()) 
arr = list(map(int, input().split()))

ei = 0
temp = arr[0]
for i in range(len(arr)):
	if arr[i] % 2 == 0:
		arr[ei], arr[i] = arr[i], arr[ei]
		ei += 1
		
print(" ".join(str(el) for el in arr))