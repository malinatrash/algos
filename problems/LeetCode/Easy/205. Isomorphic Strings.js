/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function (s, t) {
	const sToT = new Map();
	const tToS = new Map();

	for (let i = 0; i < s.length; i++) {
		if (
			(sToT.has(s[i]) && sToT.get(s[i]) !== t[i]) ||
			(tToS.has(t[i]) && tToS.get(t[i]) !== s[i])
		) {
			return false;
		}

		sToT.set(s[i], t[i]);
		tToS.set(t[i], s[i]);
	}
	return true;
};
const s = 'foo';
const t = 'bar';

console.log(isIsomorphic(s, t));
