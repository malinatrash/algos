#include <iostream>
#include <vector>

using namespace std;

template< typename T >
ostream& operator<<(ostream& out, vector<T> &V) {
	for (T v: V) out << v << ' ';
	return out;
}

void performL(int* x) {
    if (*x > 0) {
        *x -= 1;
    }
}

void performInput(int* x, int* y, vector<string>* text, char value) {
     if (*y >= 0 && *y < text->size() && *x >= 0 && *x <= (*text)[*y].size()) {
        (*text)[*y].insert((*text)[*y].begin() + *x, value);
    }
}

void performR(int* x) {
    *x += 1;
}

int main() {
	int x = 0, y = 0;
	vector<string> text;

	int t;
	cin >> t;

	while (t--) {
		string cmds;
		cin >> cmds;

		for (auto i : cmds) {
			switch (i) {
				case 'L':
					performL(&x);
					break;

				case 'R':
					performR(&x);
					break;

				case 'N':
					break;

				case 'B':
					break;

				case 'E':
					break;

				default:
					performInput(&x, &y, &text, i);
					break;
			}
		}
		cout << text;
	}

	return 0;
}
