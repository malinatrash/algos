#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	int A[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int x; cin >> x;

	int E = 0, G = 0;
	for (int now = 0; now < N; now++) {
		cout << "\n–––––––––––––––" << endl;
		if (A[now] < x) {
			cout << A[now] << " < " << x << endl; 
			swap(A[E], A[now]);
			swap(A[G], A[now]);
			E++; G++;
		} else if (A[now] == x) {
			cout << A[now] << " == " << x << endl; 
			swap(A[G], A[now]);
			G++;
		} else {
			cout << A[now] << " > " << x << endl; 
		}

		for (int i = 0; i < N; i++) {
			cout << A[i] << " ";
		}
		cout << endl << "E: " << E << " G: " << G << " N: " << now << endl;
	}

	cout << endl << E << " " << N - E;
	return 0;
}