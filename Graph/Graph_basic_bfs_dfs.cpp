#include <bits/stdc++.h>
using namespace std;
class DemoGraph{

    public: 
        unordered_map<int, list<int>>graph;
        void intputGraph(int a, int b){
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        void printgraph(){
            for(auto it : graph){
                cout<<it.first<<" : ";
                for(auto li : it.second){
                    cout<<li<<" ";
                }
                cout<<endl;
            } 
        }

        void bfs(int start){
            queue<int>q;
            q.push(start);
            map<int, bool>visited;
            visited[start]=true;
            while(!q.empty()){
                int front = q.front();
                cout<<q.front()<<" ";
                q.pop();
                for(auto it : graph[front]){
                    if(visited[it]==false){
                        q.push(it);
                        visited[it]=true;
                    }
                }
            }
            cout<<endl;
        }

        map<int, bool> visited;
        void dfs(int start){
            cout<<start<<' ';
            visited[start]=true;
            for(auto it : graph[start]){
                if(visited[it]==false){
                    dfs(it);
                }
            }
        }
};

int main() {
    
    int n, a, b; cin>>n;
    DemoGraph g;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        g.intputGraph(a, b);
    }

    g.printgraph();
    
    g.bfs(a);
    g.dfs(a);
    return 0;
}