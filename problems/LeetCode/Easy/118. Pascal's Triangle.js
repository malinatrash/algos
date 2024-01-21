/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
	res = [[1], [1, 1]]
	for (let i = 1; i <= numRows; i++) {
		let temp = [1]
		for (let j = 1; j < i; j++) {
			console.log(res[i - 1][j])
			console.log(res[i - 1][j + 1])
			temp.push(res[i - 1][i] + res[j - 1][j + 1])
		}
		temp.push(1)
	}
}

console.log(generate(5))
