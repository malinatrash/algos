/**
 * @param {number} s
 * @param {number[]} weights
 * @return {number}
 */
const getTripCount = (s, weights) => {
	if (!Array.isArray(weights)) {
		return 0;
	}
	const sum = weights.reduce((a, b) => a + b, 0);
	return Math.ceil(sum / s);
};

console.log(getTripCount(300, [87, 99, 106]));
