#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    string s; cin>>s; 
    int n=s.length();
    string r=""; //null string. we have to declare.
    for (int i = n-1; i>=0; i--) //reversing a string.
    {
        r+=s[i];  
        // r.push_back(s[i]); //also we can use r.push_back(s[i]);
        //reverse(s.begin(), s.end());  we can use this function to reverse.
    }
    if(r == s){  //we can compare string like integer.
        cout<<"This is palaindrome."<<endl;
    }
    else{
        cout<<"This is not palaindrome."<<endl;
    }
    return 0;
}