/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
	if (
		haystack.length == 0 ||
		needle.length === 0 ||
		!haystack.includes(needle)
	) {
		return -1;
	}
	if (needle === haystack) {
		return 0;
	}
	let cur = 0;
	for (let i = 0; i < haystack.length; i++) {
		if (haystack[i] === needle[cur]) {
			console.log(i);
			cur++;
		} else {
			cur = 0;
		}
		if (cur === needle.length) {
			return i === 0 ? 0 : i - cur + 1;
		}
	}
	return -1;
};

const haystack = 'mississippi';
const needle = 'issip';
console.log(strStr(haystack, needle));
