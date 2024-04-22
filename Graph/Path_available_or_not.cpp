/**
 *    author: A K M S Limon
 *    created: 06-April-2024  00:46:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// ১০^৫ টা নোড ও ১০^৫ টা এজ দেওয়া থাকবে । ১০^৫ টা কুয়েরি দেওয়া থাকবে । প্রত্যেক কুয়েরিতে 
// ২ টা নোড দেওয়া থাকবে । যদি নোড ২ টার একটা থেকে আরেকটায় যাওয়া যায় কিনা চেক করতে হবে । 

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
map<int, int> component;
int component_no = 1;

void dfs(int u) {
    vis[u] = true;
    component[u] = component_no;
    for (auto it : g[u]) {
        if (!vis[it]) {
            dfs(it);
        }
    }
    component_no++;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int node, edges; cin >> node >> edges;
    set<int> s;
    int i = 0;
    while (edges--) {
        int u, v; cin >> u >> v;
        s.insert(u), s.insert(v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (auto it : s) {
        if (!vis[it]) {
            dfs(it);
        }
    }
    int query; cin >> query;
    while (query--) {
        int u, v; cin >> u >> v;
        if (component[u] == component[v]) {
            cout << "path available" << '\n';
        }
        else {
            cout << "path not available" << '\n';
        }
    }
    return 0;
}