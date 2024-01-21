/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
	let index = 0;
	for (let i = 0; i < nums.length; i++) {
		if (nums[i] != val) {
			nums[index] = nums[i];
			index++;
		}
	}
	return index;
};
console.log(removeElement([3, 2, 2, 3], 3));
