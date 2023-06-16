#include<bits/stdc++.h>
using namespace std; 

const int N = 1e3;
long long a[N][N];
long long pref[N][N];

int main(){
	int n; cin>>n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n ; ++j) {
			cin>>a[i][j];
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n ; ++j){
			pref[i][j]=a[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
		}
	}
	int q; cin>>q; 
	while(q--){
		int a, b, c, d; cin>>a>>b>>c>>d;
		cout<<pref[c][d]-pref[a-1][d]-pref[c][b-1]+pref[a-1][b-1]<<'\n';
	}
	return 0;
}