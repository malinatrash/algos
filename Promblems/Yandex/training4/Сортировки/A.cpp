#include <iostream>
using namespace std;

int main() {
	int l = 0;
  int g = 0;
	int N; cin >> N;
	int a[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int x; cin >> x;
	for (int i = 0; i < N; i++) {
		if (a[i] < x) l++;
			else g++;
	}
	cout << l << endl << g;
	return 0;
}