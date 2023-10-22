/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
	for (let i = 0; i <= haystack.length - needle.length; i++) {
		let found = true;
		for (let j = 0; j < needle.length; j++) {
			if (haystack[i + j] !== needle[j]) {
				found = false;
				break;
			}
		}
		if (found) {
			return i;
		}
	}

	return -1;
};

// Recursive solution
/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var indexOf = function (haystack, needle, startIndex = 0) {
	if (startIndex >= haystack.length) {
		return -1;
	}
	if (haystack.startsWith(needle, startIndex)) {
		return startIndex;
	}
	return indexOf(haystack, needle, startIndex + 1);
};
