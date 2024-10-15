#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int hsh[N][26];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
    	int n, q; cin>>n>>q;
    	string s; cin>>s;
    	for (int i = 0; i < N; ++i) {
    		for (int j = 0; j < 26; ++j) {
    			hsh[i][j]=0;
    		}
    	}
    	for (int i = 1; i <= n ; ++i) {
    		(hsh[i][s[i-1]-'a'])++;
    	}
    	for(int i = 0; i<26; i++){
    		for(int j= 1; j<=n; j++){
    			hsh[j][i]+=hsh[j-1][i];
    		}
    	}
    	while(q--){
    		int l, r; cin>>l>>r;
    		int oddcnt = 0;
    		for(int i = 0; i<26; i++){
    			int cnt = hsh[r][i]-hsh[l-1][i];
    			if(cnt%2) oddcnt++;
    		}
    		if(oddcnt>1) no;
    		else yes;
    	}
    }
    return 0;
}