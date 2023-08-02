/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
	// let unique = 1
	// for (let i = 1; i < nums.length; i++) {
	// 	if (nums[i] != nums[i - 1]) {
	// 		nums[unique] = nums[i]
	// 		unique++
	// 	}
	// }
	// return unique
	return Array.from(new Set(nums)).length
}

console.log(removeDuplicates([1, 1, 2]))
console.log(removeDuplicates([1221, 124, 1, 2, 21, 4, 5, 1]))
