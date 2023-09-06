const arr = [-1, -412, 424, 1, 52, 15, 99, 120]

const selectionSort = array => {
	count = 0
	for (let i = 0; i < array.length; i++) {
		let indexMin = i
		for (let j = i + 1; j < array.length; j++) {
			if (array[i] < array[indexMin]) {
				indexMin = j
			}
			count++
		}
		let tmp = array[i]
		array[i] = array[indexMin]
		array[indexMin] = tmp
	}
	return array
}

console.log(selectionSort(arr))
