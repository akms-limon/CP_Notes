/*Given a tree of n nodes. you have to print how many nodes under a node.
or how many nodes in a sub tree*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
int sz[N];
vector<int> g[N];

void dfs(int u, int p) {
	sz[u] = 1;
	for (auto v : g[u]) {
		if (v != p) {
			dfs(v, u);
			sz[u] += sz[v];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 1; i < n; i++) {
		int u, v; cin >> u >> v;
		g[u].push_back(v);
	}
	dfs(1, 0);
	for (int i = 1; i <= n; i++) {
		cout << sz[i] << ' ';
	}
	cout << '\n';
	return 0;
}