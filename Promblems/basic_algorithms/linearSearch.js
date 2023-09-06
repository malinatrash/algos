const linearSearch = (array, item) => {
	for (let i = 0; i < array.lenght; i++) {
		if (array[i] == item) {
			return i
		}
	}
	return null
}
