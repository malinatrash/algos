const getZeroCountInRequest = (arr, reqs) => {
	const prefixz = [0];
	for (let i = 0; i < arr.length; i++) {
		if (arr[i] === 0) {
			prefixz[i + 1] = prefixz[i] + 1;
		} else {
			prefixz[i + 1] = prefixz[i];
		}
	}
	const performReq = (l, r) => {
		return prefixz[r + 1] - prefixz[l + 1];
	};
	return performReq(reqs[0], reqs[1]);
};

const arr = [1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0];
const reqs = [0, 9];
console.log(getZeroCountInRequest(arr, reqs));
