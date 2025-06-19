/**
 *    author: A K M S Limon
 *    created: 05-April-2024  23:36:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    for (auto it : g[u]) {
        if (!vis[it]) {
            dfs(it);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a;
    while (m--) {
        int u, v;
        cin >> u >> v;
        a.push_back(u);
        a.push_back(v);
        g[v].push_back(u);
        g[u].push_back(v);
    }
    int num_of_components = 0;
    for (auto j : a) {
        if (!vis[a[j]]) {
            num_of_components++;
            dfs(a[j]);
        }
    }
    cout << num_of_components << '\n';
    return 0;
}