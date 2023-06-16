/**
 *    author: A K M S Limon
 *    created: 02-June-2023  03:06:57
**/
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>x, pair<int, int>y){
    if(x.first==y.first) {
        return x.second>y.second;  // s.second>=y.second is not correct. give run time error. think it carefully.
    }
    return x.first<y.first;
}

int main() {
    
    vector< pair<int, int> > v({{1, 3}, {1, 2}, {2, 5}, {1, 1}});
    sort(v.begin(), v.end(), cmp);
    for(auto [x, y] : v){
        cout<<x<<' '<<y<<'\n';
    }


    // assert function for check any thing
    int b = 2; 
    assert(b==2);
    assert(b<1);
    return 0;
}