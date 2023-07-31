/**
 * @param {number} n
 * @return {string[]}
 */

var fizzBuzz = function (n) {
	const res = new Array(n)
	for (let i = 1; i <= n; i++) {
		divBy3 = i % 3 === 0
		divBy5 = i % 5 === 0
		res[i - 1] =
			divBy3 && divBy5
				? 'FizzBuzz'
				: divBy3
				? 'Fizz'
				: divBy5
				? 'Buzz'
				: i.toString()
	}
	return res
}
