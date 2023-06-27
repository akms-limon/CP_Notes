#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n; cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++) {
        cin>>ara[i];
    }
    reverse(ara+0/*jekhan theke sort suru hobe oi index jog kore dibo*/, ara+n/*jotudur projonto sort korbo tar porer index plus kore dibo*/);
    for (int i = 0; i < n; i++) {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
    return 0;
}