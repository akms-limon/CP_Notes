/*You are given a Acyclic graph. Find the length of the 
longest directed path in G. Here, the length of a directed path
is the number of edges in it.*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
int dp[N];
vector<int> g[N];

int rec(int u) {
	if (dp[u] != -1) {
		return dp[u];
	}
	int ans = 0;
	for (auto v : g[u]) {
		ans = max(ans, rec(v) + 1);
	}
	return dp[u] = ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    while (m--) {
    	int u, v; cin >> u >> v;
    	g[u].push_back(v);
    }
    memset(dp, -1, sizeof dp);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
    	ans = max(ans, rec(i));
    }
    cout << ans << '\n';
    return 0;
}