/**
 *    author: A K M S Limon
 *    created: 12-May-2024  20:04:34
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int depth[N];
int mx, node, par, ans, fi;

void dfs1(int u, int p) {
    depth[u] = depth[p] + 1;
    if (depth[u] > mx) {
        mx = depth[u];
        node = u;
        par = p;
    }
    for (auto v : g[u]) {
        if (v != p) {
            dfs1(v, u);
        }
    }
}

void dfs2(int u, int p) {
    depth[u] = depth[p] + 1;
    if (depth[u] > ans) {
        ans = depth[u];
        fi = u;
    }
    for (auto v : g[u]) {
        if (v != p) {
            dfs2(v, u);
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
    dfs1(1, 0);
    cout << node << ' ' << par << '\n';
    dfs2(node, 0);
    cout << ans << ' ' << fi << '\n';
    return 0;
}