/**
 *    author: A K M S Limon
 *    created: 20-April-2023  21:36:55
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    cin.ignore();   //getline use korle ata use korte hoy.
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        while(ss>>word){
            reverse(word.begin(), word.end());
            cout<<word<<' ';
        }
        cout << '\n';
    }
    return 0;
}