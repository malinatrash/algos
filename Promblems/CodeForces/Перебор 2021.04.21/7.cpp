#include <iostream>
#include <vector>

using namespace std;


int getBalance(string s) {
	int bal = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') {
			bal++;
		} else {
			bal--;
		}
	}
	return bal;
}

void solve(string s, int x, int n) {
	int b = getBalance(s);	
	int ans = 0;
	int ai = 0;
	for (int i = 0; i < n; i++) {
		
		if (b == 0) {
			if (ai == x) {
				ans = -1; break;
			}
		} else if ((x - ai) % b == 0 && (x - ai) / b >= 0) {
			ans++;
		}

		if (s[i] == '0') {
			 ai++; 
		} 
		else { 
			ai--; 
		}
	}

	cout << ans << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

				solve(s, x, n);
    }
    return 0;
}
