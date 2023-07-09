#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 	int n; cin>>n;
 	map<int, pair<string, int>>m; 
 	while(n--){
 		string s; 
 		int a, b; cin>>a>>s>>b;
 		m[a]=make_pair(s, b);
 	}
 	for(auto it : m){
 		cout<<it.first<<' '<<it.second.first<<' '<<it.second.second<<'\n';
 	}
 	vector<int, pair<int, string>>v;
  	for(auto it : m){
 		v[it].make_pair(it.first, it.second.first);
 	}
 	sort(v.begin(), v.end());
 	for(int i = 0; i<v.size(); i++){
 		cout<<" "<<v[i].first<<' '<<v[i].second<<endl;
 	}
    return 0;
}	