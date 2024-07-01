/**
 *    author: A K M S Limon
 *    created: 06-April-2024  14:12:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    while (m--) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);   
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!vis[v]) {
                q.push(v);
                vis[v] = true;
            }
        }
    }
    return 0;
}