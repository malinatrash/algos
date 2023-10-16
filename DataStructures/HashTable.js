const setsize = 10;
let myset = [];

for (let i = 0; i < setsize; i++) {
	myset.push([]);
}

const add = x => {
	!find(x) && myset[x % setsize].push(x);
};

const find = x => {
	for (now of myset[x % setsize]) {
		if (now == x) {
			return true;
		}
	}
	return false;
};

const deleteItem = x => {
	const xlist = myset[x % 3];
	for (let i = 0; i < xlist.length; i++) {
		if (xlist[i] == x) {
			xlist[i], (xlist[xlist.length - 1] = xlist[xlist.length - 1]), xlist[i];
			xlist.pop();
			return;
		}
	}
};

console.log(myset);
