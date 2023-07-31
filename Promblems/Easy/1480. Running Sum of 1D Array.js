// My solution
const runningSum = nums => {
	let sum = 0
	return nums.map(item => {
		sum += item
		return sum
	})
}

console.log(runningSum([1, 2, 3, 4]))

// Best solution
// Time Complexity : O(n)
// Space Complexity : O(n)
var runningSumBest = function (nums) {
	// Create an output array of size equal to given nums size...
	let output = new Array(nums.length)
	// Set output[0] = nums[0]...
	output[0] = nums[0]
	// Traverse all elements through the for loop...
	for (let idx = 1; idx < nums.length; idx++) {
		// Storing the running sum...
		output[idx] = output[idx - 1] + nums[idx]
	}
	return output // Return the running sum of nums...
}
