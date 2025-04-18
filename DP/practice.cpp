/**
 *    author: A K M S Limon
 *    created: 29-March-2025  15:34:44
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
int dp[N];
vector<vector<int>> g(N);

void dfs(int u, int p) {
  for (auto v: g[u]) {
    if (v != p) {
      
    }
  }
}



int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  for (int i = 0; i < n - 1; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
  }
  memset(dp, -1, sizeof dp);

  dfs(1);
  return 0;
}