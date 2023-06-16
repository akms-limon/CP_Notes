#include<bits/stdc++.h>
using namespace std;

#define N 10005
vector<int> dist(N, INT_MAX);
vector<vector<pair<int, int>>>adj(N);

void addEdges(int src, int dest, int distance){
    adj[src].push_back({dest, distance});
    adj[dest].push_back({src, distance});
}

void dijkstra(int src){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    dist[src]=0;
    q.push({dist[src], src});

    while (!q.empty()) {
        int front = q.top().second;
        q.pop();
        for(auto it : adj[front]){
            if(it.second + dist[front] < dist[it.first]){
                dist[it.first] = it.second + dist[front];
                q.push({dist[it.first], it.first});
            }
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    int n, e;
    cin>>n>>e;
    for (int i = 0; i < e; i++) {
        int src, dest, distance;
        cin>>src>>dest>>distance;
        addEdges(src, dest, distance);
    }
    dijkstra(2);
    cout<<dist[4]<<endl;
    return 0;
}