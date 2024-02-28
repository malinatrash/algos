n = int(input())
arr = list(map(int, input().split()))

def sort(arr):
	for i in range(1, len(arr)):
		key = arr[i]
		j = i - 1
		while j >= 0 and arr[j] > key:
			arr[j + 1] = arr[j]
			j = j - 1
			print("    "+" ".join(str(el) for el in arr))
		arr[j + 1] = key
		print(" ".join(str(el) for el in arr))
	
	return arr

print(" ".join(str(el) for el in sort(arr)))
