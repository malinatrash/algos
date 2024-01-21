/**
 * @param {number} n
 * @return {boolean}
 */

var isPowerOfFour = function (n) {
	return Number.isInteger(Math.log2(n) / 2);
};
