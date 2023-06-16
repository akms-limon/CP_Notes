#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=20, b=10, c=30;
    cout<<max(a, b)<<endl;
    cout<<min(a, b)<<endl;
    int x=max(a, b);
    cout<<max(x, c)<<endl;
    cout<<max({a, b, c})<<endl;
    cout<<min({a, b, c})<<endl;
    return 0;
}