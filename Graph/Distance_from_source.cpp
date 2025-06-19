/**
 *    author: A K M S Limon
 *    created: 06-April-2024  14:12:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// একটা আনওয়েটেড গ্রাফ দেওয়া আছে । একটা সোর্স ফিক্সড করে দেওয়া থাকবে ।
// সেই সোর্স থেকে প্রত্যেকটা নোড এর ডিস্টান্স বের করতে হবে । অর্থাৎ কোন নোড কোন লেভেল
// এ আছে সেটা বের করতে হবে ।

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
map<int, int> dis;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    set<int> s;
    while (m--) {
        int u, v; cin >> u >> v;
        s.insert(u);
        s.insert(v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    auto source = s.begin();
    q.push(*source);
    vis[*source] = true;
    dis[*source] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!vis[v]) {
                q.push(v);
                vis[v] = true;
                dis[v] = dis[u] + 1;
            }
        }
    }
    for (auto it : dis) {
        cout << it.first << ' ' << it.second << '\n';
    }
    return 0;
}