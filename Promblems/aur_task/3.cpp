#include <iostream>
using namespace std;
int main() {
	int n;
	cin << n;

	char[] arr = new char[2];
	arr[0] = char(n / 100);
	arr[1] = char(n / 10);

	for (int i = 0; i < 2; i++ ) {
		cout << arr[i];
	}
}