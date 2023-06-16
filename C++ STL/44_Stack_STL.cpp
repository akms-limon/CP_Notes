#include <bits/stdc++.h>
using namespace std;
#define nl "\n";
#define nll cout<<"\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<nl;
    s.pop();
    cout<<s.top()<<nl;
    cout<<s.empty()<<nl;

    return 0;
}