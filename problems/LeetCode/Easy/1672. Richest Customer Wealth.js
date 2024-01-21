/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function (accounts) {
	let maxSum = 0
	for (let i = 0; i < accounts.length; i++) {
		let sum = accounts[i].reduce(
			(currentSum, currentNumber) => currentNumber + currentSum
		)
		if (maxSum < sum) maxSum = sum
	}
	return maxSum
}

var maximumWealth = function (accounts) {
	var res = 0
	for (var i = 0; i < accounts.length; i++) {
		var temp = 0
		for (var j = 0; j < accounts[i].length; j++) {
			temp += accounts[i][j]
		}
		res = Math.max(res, temp)
	}
	return res
}
