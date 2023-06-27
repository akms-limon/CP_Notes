#include <bits/stdc++.h>
using namespace std;
#define nl "\n";
#define nll cout<<"\n";

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<< q.front()<<nl;
    q.pop();
    cout<<q.front()<<nl;
    cout<<q.size()<<nl;
    cout<<q.empty()<<nl;
    priority_queue<int>qq;
    qq.push(1);
    qq.push(2);
    qq.push(3);
    cout<<qq.top()<<nl; 
    
    return 0;
}