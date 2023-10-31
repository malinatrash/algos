#include <iostream>
#include <vector>
using namespace std;
 
void solve(vector<int> p)	{
	for (int i = 1; i < p.size() - 1; i++) {
		if (p[i] > p[i - 1] && p[i] > p[i + 1]) {
            cout << "YES\n" <<  i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
	}
	cout << "NO" << endl;
}
 
int main() {
    int T; 
    cin >> T;
    while T-- {
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