/**
 *    author: A K M S Limon
 *    created: 14-February-2023  01:55:57
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

const int N=1e5+9;
int a[N];

bool binary_search_by_recursion(int lo, int hi, int x){
    if(lo>hi) return false;
    int mid  = (lo + hi)/2;
    if(x==a[mid]) return true;
    else if(x<a[mid]) return binary_search_by_recursion(lo, mid-1, x);
    else return binary_search_by_recursion(mid+1, hi, x);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k; cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    while(k--){
        int x; cin>>x;
        bool ok = binary_search_by_recursion(0, n-1, x);
        if(ok) yes;
        else no;
    }
    return 0;
}