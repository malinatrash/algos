#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > G;
vector<int> colors;
int cnt = 0;

void dfs(int c, int color) {
	if (color != colors[c]) {
		cnt++;
	}
	for (int x: G[c]) {
		dfs(x, colors[c]);
	}
}

int main() {
	int n; cin >> n;
	G.resize(n+1);
	colors.resize(n+1);
	for (int i  = 2; i <= n; i++) {
		int p; cin >> p;
		G[p].push_back(i);
	}
	for (int i  = 1; i <= n; i++) {
		cin >> colors[i];
	}
	dfs(1, 0);
	cout << cnt;
	return 0;
}
