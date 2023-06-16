#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int v[N];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m; 
	cin>>n>>m;
	long long mx = -1;
	while(m--){
		int a, b, d; 
		cin>>a>>b>>d;
		for(int i = a; i<=b; i++){
			v[i]+=d;
		}
		for (int i = 1; i <= n ; ++i)
		{
			mx = max(mx, v[i]);
		}
	}

	cout<<mx<<'\n';
    return 0;
}	