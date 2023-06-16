#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<int, string>mp;
    mp[2] = "two";
    mp[100] = "hundred";
    auto it = mp.begin();
    cout<<(*it).first<<' '<<(*it).second<<endl;
    cout<<it->first<<" "<<it->second<<endl;  
    for(auto it = mp.begin(); it!=mp.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}