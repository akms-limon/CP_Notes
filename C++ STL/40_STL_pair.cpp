#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    //swaping two pair
    pair<int, int>p1, p2;
    p1 = make_pair(1, 2);
    p2 = make_pair(3, 4);
    swap(p1, p2);
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    //nested pair
    pair<pair<int, int>, int> x;
    x = make_pair(make_pair(1,2), 3);
    cout<<x.second<<endl;
    cout<<x.first.first<<endl;
    cout<<x.first.second<<endl;
    //cout<<x.second.first<<endl;

    return 0;
}