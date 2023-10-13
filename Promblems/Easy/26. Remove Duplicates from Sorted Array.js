/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
	for (let i = 0, j = 1; j < nums.length; j++) {
		if (nums[i] != nums[j]) {
			i++;
			nums[i] = nums[j];
		}
		if (j == nums.length - 1) {
			return i + 1;
		}
	}
};

console.log(removeDuplicates([1, 1, 2]));
console.log(removeDuplicates([1221, 124, 1, 2, 21, 4, 5, 1]));
