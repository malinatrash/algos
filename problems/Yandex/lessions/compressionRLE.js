const compress = str => {
	if (str === '') {
		return '';
	}
	let res = '';
	let curStr = str[0];
	let cur = 1;
	for (let i = 1; i < str.length; i++) {
		if (str[i] === curStr) {
			cur++;
		} else {
			if (cur > 1) {
				res += `${curStr}${cur}`;
			} else {
				res += `${curStr}`;
			}
			curStr = str[i];
			cur = 1;
		}
		if (i === str.length - 1) {
			if (cur > 1) {
				res += `${curStr}${cur}`;
			} else {
				res += `${curStr}`;
			}
		}
	}
	return res;
};

console.log(compress('abbcccddddahdwaa'));
