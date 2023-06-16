/**
 *    author: A K M S Limon
 *    created: 25-December-2022  00:32:32
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


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int a, b, c; cin>>a>>b>>c;
        vector<ll>v;
        ll i=1, j=1, k=c+10; ll mult_a=a, mult_b=b;
        while(k--){
            if(mult_a<mult_b){
                v.push_back(mult_a);
                i++; mult_a=i*a;
            }
            else if(mult_b<mult_a){
                v.push_back(mult_b);
                j++; mult_b=j*b;
            }
            else{
                v.push_back(mult_a);
                i++; j++; mult_a=i*a; mult_b=j*b;
            }
        }
        ll p = v[c-1];
        if(p%a==0 && p%b==0) {
            for(int i = p; i>=0; i-=lcm(a, b)){
                cout<<i<<' ';
            } nll;
        }
        else if(p%a==0){
            for(int i = p; i>=0; i-=a){
                cout<<i<<' ';
            } nll;
        }
        else {
            for(int i = p; i>=0; i-=b){
                cout<<i<<' ';
            } nll;
        }
        
    return 0;
}