array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
need_to_find = 5

for element in array:
    if element == need_to_find:
        index = array.index(element) + 1
        print(index)
        		
# it will be 5 because this is the 
# ordinal number of the desired element


array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
need_to_find = 5

low = 0
high = len(array) - 1

while low <= high:
    mid = (low + high) // 2
    # in square brackets we write 
		# the index of the element in the list
    guess = array[mid]
    if guess == need_to_find:
        print(mid + 1) # will be 5
        break
    elif guess > need_to_find:
        high = mid - 1
    else:
        low = mid + 1

# it will be 5 because this is the 
# ordinal number of the desired element