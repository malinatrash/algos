#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

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

void performU(int* x, int* y, vector<string> text) {
    if (*y == 0) return;
    *y -= 1;
    *x = std::min(static_cast<int>(text[*y].size()), *x);
}

void performD(int* x, int* y, vector<string> text) {
    if (*y >= text.size() - 1) return;
    *y += 1;
    *x = std::min(static_cast<int>(text[*y].size()), *x);
}

void performN(int* x, int* y, vector<string>* text) {
    string need = "";
    for (int i = *x; i < text->at(*y).size(); i++) {
        need.append(1, text->at(*y)[i]);
    }
    // cout << "need: " << need << endl;

    // Удаляем символы с *x до конца строки
    (*text)[*y].erase(*x);

    // Вставляем новую строку после текущей строки
    text->insert(text->begin() + (*y) + 1, need);

    *x = 0;
    *y += 1;
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
    int t; cin >> t;
    while (t--) {
        int x = 0, y = 0;
        vector<string> text;
        text.push_back("");
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

                case 'U':
                    performU(&x, &y, text);
                    break;

                case 'D':
                    performD(&x, &y, text);
                    break;

                case 'N':
                    performN(&x, &y, &text);
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
            // cout << "char: " << i << " x: " << x << " y: " << y << endl;
        }
        for (string str: text) {
		    cout << str << endl;
	    }
        cout << "-" << endl;
    }
	return 0;
}