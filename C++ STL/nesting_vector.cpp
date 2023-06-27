/**
 *    author: A K M S Limon
 *    created: 26-June-2023  21:13:19
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector< vector<int> > v;
    int row; 
    cin>>row;
    for (int i = 0; i < row; i++) {
        int col; 
        cin>>col;
        vector<int>temp;
        for(int j = 0; j<col; j++){
            int a; cin>>a; 
            temp.push_back(a);
        }
        v.push_back(temp);
    }

    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++){
            cout<<v[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}