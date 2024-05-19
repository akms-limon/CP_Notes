/**
 *    author: A K M S Limon
 *    created: 11-May-2024  02:11:18
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 10;
int indeg[N];
vector<int> g[N];
vector<int> vis;

// ধরি কিছু কাজের সিকুয়েন্স দেওয়া আছে । একটি করার আগে আরেকটি করতে হবে । যেমন যদি ১ করার আগে ২ করতে হয় । তাহলে ২ থেকে ১ এ একটা ডিরেক্টেড এজ দিব । 
// এই ভাবে সব গুলা কাজ কে এজ দেওয়ার পর যেই গ্রাফ পাব সেইটা টপ সর্ট করলে আমরা কাজের সিকুয়েন্স টা পাব ।

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m; cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    vector<int> z;
    for (int i = 0; i <= n; i++) {
        if (indeg[i] == 0) {
            z.push_back(i);
            vis[i] = true;
        }
    }
    vector<int> ans;
    while (ans.size() < n) {
        if (z.empty()) {
            cout << "IMPOSSIBLE" << '\n';
            return 0;
        }
        int cur = z.back();
        z.pop_back();
        for (auto v : g[cur]) {
            indeg[v]--;
            if (vis[v] != true && indeg[v] == 0) {
                z.push_back(v);
                vis[v] = true;
            }
        }
    }
    for (auto it : ans) {
        cout << it << ' ';
    }
    cout << '\n';
    return 0;
}