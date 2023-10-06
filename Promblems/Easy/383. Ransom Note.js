/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
	return magazine.includes(ransomNote);
};

console.log(canConstruct('aa', 'aab'));
