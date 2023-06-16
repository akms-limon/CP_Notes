/**
 *    author: A K M S Limon
 *    created: 22-December-2022  22:58:38
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define dbg(x) cerr<<x<<"\n"
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fl(i,a,b) for(int i = a; i <= b; i++)
#define fll(i,a,b) for(int i = a; i >= b; i--)
#define ff first
#define ss second
#define flit(v) for(auto it=v.begin(); it!=v.end(); it++)
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
#define sumx(array,sum) { for (auto x: array) sum+=x;  }
using namespace std;

int callbyvalue(int n){
    n++;
    return n;
}

void callbyreference(int &n){
    n++;
}

void swapbyvalue(int p, int q){
    int temp = p; 
    p = q;
    q = temp;
}

void swapbyreference(int &p, int &q){
    int temp = p; 
    p = q;
    q = temp;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int a=3;
        cout<<"Before increase a = "<<a<<endl;

        callbyvalue(a); //কল বাই ভ্যালু মেইন ফাংশনে কোন ভ্যারিয়েবলের মান পরিবর্তন করতে পারে না ।
        cout<<"After increase by value a = "<<a<<endl;

        callbyreference(a); //কল বাই রেফারেন্স মেইন ফাংশন ভ্যারিয়েবলের মান পরিবর্তন করতে পারে ।
        cout<<"After increase by reference a = "<<a<<endl;

        int b = 10, c = 20;
        cout<<"Before swaping b = "<<b<<" c = "<<c<<endl;

        swapbyvalue(b, c);
        cout<<"after swaping b and c by value : b = "<<b<<' '<<"c = "<<c<<endl;

        swapbyreference(b, c);
        cout<<"after swaping b and c by reference : b = "<<b<<' '<<"c = "<<c<<endl;
    return 0;
}