const array = [1, 2, 3, 4, 5, 9, 11, 12, 152]
const binarySearch = (array, item) => {
	let count = 0
	let start = 0
	let end = array.length
	let middle
	let found = false
	let pos = -1
	while (!found && start <= end) {
		count++
		middle = Math.floor((start + end) / 2)
		if (array[middle] === item) {
			found = true
			pos = middle
			console.log(count)
			console.log(pos)
			console.log(item)
			return
		}
		if (item < array[middle]) {
			end = middle - 1
		} else {
			start = middle + 1
		}
	}
	console.log(count)
	console.log(pos)
	if (pos != -1) {
		console.log(item)
	}
}

binarySearch(array.sort(), 3)
