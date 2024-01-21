/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
	const map = new Map();
	let i = 0;

	while (i < nums.length) {
		if (map.has(nums[i]) && map.get(nums[i]) >= 2) {
			nums.splice(i, 1);
		} else {
			map.set(nums[i], (map.get(nums[i]) || 0) + 1);
			i++;
		}
	}

	return nums.length;
};

console.log(removeDuplicates([1, 1, 1, 2, 2, 3]));
