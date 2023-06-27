#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v({1, 2, 4, 4, 4, 5, 6, 6, 9});
    int x = 2;
    if(binary_search(v.begin(), v.end(), x)){
        cout<<"yes\n";
    }
    auto it = lower_bound(v.begin(), v.end(), x);
    cout<<it-v.begin()<<'\n';
    it = upper_bound(v.begin(), v.end(), x);
    cout<<it-v.begin()<<'\n';

    int cout_of_x = upper_bound(v.begin(), v.end(), x)-lower_bound(v.begin(), v.end(), x);
    cout<<cout_of_x<<'\n';
    return 0;
}