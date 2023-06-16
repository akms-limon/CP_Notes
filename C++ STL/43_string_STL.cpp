#include <bits/stdc++.h>
using namespace std;
#define nl "\n";
#define nll cout<<"\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s; 
    s = "abcd";
    cout<<s<<nl;
    s.push_back('e'); //add an element in a string in last
    cout<<s<<nl;
    s+='f';
    cout<<s<<nl;

    s = 'x' + s;  //adding an element in front of a string 
    cout<<s<<nl;

    string a = "ab";
    string b = "yz";
    cout<<a+b<<nl;

    //erase any element of an array
    s.erase(s.begin());
    
    return 0;
}