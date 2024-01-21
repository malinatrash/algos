/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
	const str = s
		.toLowerCase()
		.replace(/[^a-z0-9]/gi, '')
		.split()
		.reverse()
		.join('');
	let left = 0,
		right = str.length - 1;
	while (left < right) {
		if (str[left] !== str[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
};
