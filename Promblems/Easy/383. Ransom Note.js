/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
	return new Set(magazine).includes(new Set(ransomNote))
}

console.log(canConstruct('aa', 'aab'))
