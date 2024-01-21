#include <iostream>
using namespace std;

void solve(int L, int R, int a[]) {
	int min = INT_MAX;
	for (int j = L; j <= R; j++) {
		if (min > a[j]) {
			min = a[j];
		}
		if (a[j] > min) {
			cout << a[j] << endl;
			return;
		}
	}
	cout << "NOT FOUND" << endl;
}

int main() {
	int N,M;
	cin >> N >> M;

	int a[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < M; i++) {
		int L, R;
		cin >> L >> R;
		solve(L,R, a);
	}
}