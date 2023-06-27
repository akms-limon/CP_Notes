/**
 *    author: A K M S Limon
 *    created: 26-June-2023  22:17:47
**/
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector< pair<int, int> > p={{1, 2}, {3, 4}, {4, 5}};

    vector< pair<int, int> > ::iterator it;

    for(it = p.begin(); it!=p.end(); it++){
        cout<<(*it).first<<' '<<it->second<<endl;
        //if we make iterator then we have to write (*it).first or it->first
    } cout<<'\n'; //(*it).first = it->first
    
    //shortcut iterator
    for(auto it : p){ //if we use auto it we can access values directly
        cout<<it.first<<' '<<it.second<<endl; 
        //if we use auto it we can write it.first 
    }

    return 0;
}