#include <iostream>
#include <vector>
using namespace std;

vector<int> partition(vector<int> arr, int x) {
	int equal = 0, greater = 0;
	for (int now = 0; now < arr.size(); now++) {
		if (arr[now] < x) {
			swap(arr[equal], arr[now]);
			swap(arr[greater], arr[now]);
			equal++; greater++;
		} else if (arr[now] == x) {
			swap(arr[greater], arr[now]);
			greater++;
		}
	}
	return arr;
}

void quickSort() {

}

int main() {
	int N; cin >> N;
	vector<int> a;
	for (int i = 0; i < N; i++) {
		int ai; cin >> ai;
		a.push_back(ai);
	}
	int x; cin >> x;


	return 0;
}