t = int(input())
for _ in range(0, t):
	min_temp = 15
	max_temp = 30
	n = int(input())
	for _ in range(0, n):
		request = input().split()
		temp = int(request[1])
		if request[0] == ">=":
			min_temp = temp if temp > min_temp else min_temp
		else:
			max_temp = temp if temp < max_temp else max_temp
		if min_temp > max_temp:
			print("-1")
		else:
			print(min_temp)
	print()
	
t = int(input())  

for _ in range(t):
    n = int(input())  
    min_temp = 15
    max_temp = 30
    
    for _ in range(n):
        requirement = input().split()
        operator = requirement[0]  
        temperature = int(requirement[1])
        
        if operator == ">=":
            min_temp = temperature if min_temp < temperature else min_temp
        else:
            max_temp = temperature if max_temp > temperature else max_temp
        print(min_temp if min_temp <= max_temp else -1)
    print()
