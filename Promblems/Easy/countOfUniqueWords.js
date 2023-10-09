/**
 * @param {string} str
 */
var countOfUnique = function (str) {
	let count = 0;
	let map = new Map();
	str.split('').forEach(e => {
		if (!map.has(e)) {
			map.set(e, 0);
		}
		map.set(e, map.get(e) + 1);
		if (map.get(e) > count) {
			count = map.get(e);
		}
	});

	console.log(`${count} – max value`);
};

const str = '11';
countOfUnique(str);
