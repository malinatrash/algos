#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > G;
vector<int> colors;
int cnt = 0;

void dfs(int c) {
	for (int x: G[c]) {
		dfs(x);
	}
}

int main() {
	int n; cin >> n;
	for (int i  = 0; i < n; i++) {
		int p; cin >> p;
		G[p].push_back(p);
	}
	dfs(1, 0);
	return 0;
}
