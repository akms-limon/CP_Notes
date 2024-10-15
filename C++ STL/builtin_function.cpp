#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=10, b=60, c=30, d=20;
    // cout<<max({a,b,c,d})<<endl;
    // cout<<min({a, b, c, d})<<endl;
    vector<int>v={9,8,-3,5,8,6};
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0); // 0 = initial value of sum
    int cnt = count(v.begin(), v.end(), 8); // how many time 8 present in this vector
    // cout<<cnt<<endl;

    cout << all_of(v.begin(), v.end(), [](int x){
        return x>0;
    }) << '\n';
    cout << any_of(v.begin(), v.end(), [](int x) {
        return x<0;
    }) << '\n';
    cout << none_of(v.begin(), v.end(), [](int x) {
        return x<0;
    }) << '\n';
    return 0;
}