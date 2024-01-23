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
