/**
 *    author: A K M S Limon
 *    created: 12-May-2024  09:41:34
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int depth[N];

void dfs(int u, int p) {
    depth[u] = depth[p] + 1;
    for (auto v : g[u]) {
        if (v != p) {
            dfs(v, u);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) {
        cout << depth[i] << ' ';
    }
    return 0;
}