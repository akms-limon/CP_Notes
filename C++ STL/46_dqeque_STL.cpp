#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"

int main()
{
    /*******Deque is realy a wow type STL is very beautifull to use*****/
    deque<int>dq;
    dq.push_back(2);
    dq.push_back(4);
    dq.push_back(7);
    dq.pop_back();
    dq.pop_front();
    dq.push_front(7);
    for(auto it: dq) {
        cout<<it<<" ";
    } 
    cout<<endl;
    sort(dq.begin(), dq.end());
    reverse(dq.rbegin(), dq.rend());
    for (int i = 0; i < dq.size(); i++) {
        cout<<dq[i]<<' ';
    }
    cout<<endl;
    return 0;
}