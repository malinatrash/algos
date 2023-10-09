const recursiveBinarySearch = (array, item, start, end) => {
	let middle = Math.floor((start + end) / 2);
	if (item === array[middle]) {
		return middle;
	}
	if (item < array[middle]) {
		return recursiveBinarySearch(array, item, 0, middle - 1);
	} else {
		return recursiveBinarySearch(array, item, middle + 1, end);
	}
};

let array = [
	1, 2, 3, 5, 7, 8, 48, 73, 92, 121, 150, 151, 613, 1001, 20001, 99999,
];
console.log(recursiveBinarySearch(array, 92, 0, array.length));
