/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
	k %= nums.length;
	nums.unshift(...nums.splice(nums.length - k, k));
	console.log(nums);
};

const nums = [1, 2, 3, 4, 5, 6, 7];
const k = 3;
rotate(nums, k);
