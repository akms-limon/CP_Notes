#include <bits/stdc++.h>
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