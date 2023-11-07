#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	int a[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int x; cin >> x;

	int equal = 0, greater = 0;
	for (int now = 0; now < N; now++) {
		if (a[now] < x) {
			swap(a[equal], a[now]);
			swap(a[greater], a[now]);
			equal++; greater++;
		} else if (a[now] == x) {
			swap(a[greater], a[now]);
			greater++;
		}
	}

	cout << endl << equal << " " << N - equal;
	return 0;
}