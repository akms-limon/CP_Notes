#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int ara[5]={2,3,1,5,4};

    sort(ara+0/*jekhan theke sort suru hobe oi index jog kore dibo*/, ara+5/*jotudur projonto sort korbo tar porer index plus kore dibo*/);

    for (int i = 0; i < 5; i++)
    {
        cout<<ara[i]<<" ";
    }
    return 0;
}