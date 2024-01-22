#include <iostream>
using namespace std;

void solve(string s) {
	if (isdigit(s[0]) || !isdigit(s[1])) {
		cout << "-" << endl; return;
	}
	bool isFirstPattern = true;
	for (int i = 2; i < s.size(); i++) {
		cout << s[i] << " ";
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		solve(s);
	}
}