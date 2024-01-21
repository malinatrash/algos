/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function (nums) {
	let unique = []
	for (let i = 0; i < nums.length; i++) {
		if (!unique.includes(nums[i])) {
			unique.push(nums[i])
		} else {
			unique.filter(e => e === nums[i]).pop()
		}
	}
}
