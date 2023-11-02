#include <iostream>
using namespace std;

int main() {
	int k,n;
	cin >> k >> n;

	int a[n+1];
	int remain = 0;
	for (int i = 1; i < n +1; i++) {
		cin >> a[i];
		remain+=a[i];
	}
	int r = n;
	int time = 0;
	int i = 0;
	while (remain != 0) {
		time++;
		i++;
		if (a[i] >= n) {
			r -= a[i] - a[i] % r;
			a[i] = a[i] % r;
			remain -= a[i] - a[i] % r;
			time += i;
			i = 0;
			r = n;
		} else {
			r -= a[i];
			remain -= a[i];
			i++;
		}
	}
	cout << time << endl;
	return 0;
}
