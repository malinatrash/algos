/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
	const map = new Map()

	for (let i = 0; i < nums.length; i++) {
			const dif = target - nums[i]
			if (map.has(dif)) {
					return [map.get(dif), i]
			} else {
					map.set(nums[i], i)
			}
	}
};