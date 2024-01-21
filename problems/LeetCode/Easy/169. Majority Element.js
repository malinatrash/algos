/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
	const map = new Map();
	for (let i = 0; i < nums.length; i++) {
		if (map.has(nums[i])) {
			map.set(nums[i], map.get(nums[i]) + 1);
		} else {
			map.set(nums[i], 1);
		}
		if (map.get(nums[i]) >= nums.length / 2) {
			return getKeyByValue(map, map.get(nums[i]));
		}
	}
};

function getKeyByValue(map, valueToFind) {
	let result = null;

	map.forEach((value, key) => {
		if (value === valueToFind) {
			result = key;
		}
	});

	return result;
}

const nums = [3, 2, 3, 2, 5, 2];
console.log(majorityElement(nums));
