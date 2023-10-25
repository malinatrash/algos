#include <iostream>
#include <vector>
using namespace std;
 
void solve(vector<int> p)	{
	for (int i = 0; i < p.size(); i++) {
		for (int j = i + 1; j < p.size(); j++) {
			for (int k = j + 1; k < p.size(); k++) {
				if ((i < j && j < k) && (p[i] < p[j] && p[j] > p[k])) {
					cout << "YES" << endl << i+1 << " " << j+1 << " " << k+1 << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
}
 
int main() {
    int T; 
    cin >> T;
    for (int _ = 0; _ < T; _++) {
        int n; 
        cin >> n;
        vector<int> p(n);
        for (int __ = 0; __ < n; __++) {
            cin >> p[__];
        }
        solve(p);
    }
    return 0;
}