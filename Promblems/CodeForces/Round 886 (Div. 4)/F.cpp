#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > G;
vector<int> T;
int ans = 1000000;

pair<int, int> dfs(int c, int prev, int dep) {
	pair <int, int> len = {1000000, 1000000};
	if (T[c] == 1) {
		len.first = dep;
	} else if (T[c] == 2) {
		len.second = dep;
	}
	for (int x:G[c]) {
		if (x != prev) {
			auto ln = dfs(x, c, dep+1);
			len.first = min(len.first, ln.first);
			len.second = min(len.second, ln.second);
		}
	}
	if (len.first + len.second < 1000000) {
	    ans = min(ans, len.first + len.second - 2 * dep);
	}
	return len;
}

int main() {
	int n, k;
	bool flg = false;
	cin >> n >> k;

	T.resize(n + 1);
	G.resize(n + 1);

	for (int i = 1; i <= n; i++) cin >> T[i];

	for (int i = 1; i < n; i++) {
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	if (k == 1) {
	    
	}

	dfs(1, 0, 0);

	return 0;
}
