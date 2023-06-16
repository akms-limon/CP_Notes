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
#define PI 3.14159
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

const int N=1e3;
int a[N][N];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin>>n>>m;
    for(int i = 1; i<=n; i++){
    	for(int j = 1; j<=m; j++){
    		cin>>a[i][j];
    		if(a[i][j]%2==0) a[i][j]=0;
    		else a[i][j]=1;
    	}
    }
    for(int i = 1; i<=n; i++){
    	for(int j = 1; j<=m; j++){
    		a[i][j]=a[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
    	}
    }
    int q; cin>>q;
    for(int i = 0; i<q; i++){
    	int w, x, y, z;
    	cin>>w>>x>>y>>z;
    	cout<<a[y][z]-a[w-1][z]-a[y][x-1]+a[w-1][x-1]<<'\n';
    }
    return 0;
}