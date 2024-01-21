#include <iostream>
#include <vector>

using namespace std;

template< typename T >
ostream& operator<<(ostream& out, vector<T> &V) {
    for (T v : V) out << v << ' ';
    return out;
}

void performL(int* x) {
    if (*x > 0) {
        *x -= 1;
    }
}

void performB(int* x) {
    *x = 0;
}

void performE(int* x, int y, vector<string>* text) {
	*x = (*text)[y].size();
}

void performN(int x, int* y, vector<string>* text) {
    *y += 1;
		text->push_back("");
		for (int i = x; i < text[*y-1].size(); i++) {
			text[*y].push_back(text[*y-1].at(x));
		}
}

void performInput(int* x, int y, vector<string>* text, char value) {
    if (y >= 0 && y < text->size() && *x >= 0 && *x <= (*text)[y].size()) {
        (*text)[y].insert((*text)[y].begin() + *x, value);
        *x += 1;
    }
}

void performR(int* x, int y, vector<string>* text) {
	if (*x < (*text)[y].size()) {
    *x += 1;
	}
}

int main() {
    int x = 0, y = 0;
    vector<string> text;
    text.push_back("");

    vector<vector<int>> st;

    int t;
    cin >> t;

    while (t--) {
        string cmds;
        cin >> cmds;

        for (char i : cmds) {
            switch (i) {
                case 'L':
                    performL(&x);
                    break;

                case 'R':
                    performR(&x, y, &text);
                    break;

                case 'N':
										performN(x, &y, &text);
                    break;

                case 'B':
										performB(&x);
                    break;

                case 'E':
										performE(&x, y, &text);
                    break;

                default:
                    performInput(&x, y, &text, i);
                    break;
            }
            // cout << "\nCHAR IS: " << i << " x: " << x << " y: " << y << endl;
        }
    }
	for (string i: text) {
		cout << i;
		cout << endl;
	}
	cout << text[1];
	return 0;
}
