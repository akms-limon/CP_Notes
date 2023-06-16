/**
 *    author: A K M S Limon
 *    created: 12-March-2023  00:27:15
**/
#include <bits/stdc++.h>
using namespace std;

int main() {


    /*****This is one of the Best way to take input sentence and output word by word******/
    string s; 
    getline(cin, s);   //getline er age akta integer input nile cin.ignore(); use korte hoy. see 51 no code.
    cout<<s<<endl;
    stringstream ss; 
    ss << s;
    string word;
    ss>>word;
    while(ss>>word){
        cout<<word<<'\n';
    }
    return 0;
}