#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int main() {

    //declare n size vector with a initialize value : 
    vector<int>vv(10, 0);
    for(auto it : vv){
        cout<<it<<' ';
    }
    cout<<endl;

    //copy vector
    vector<int> vv2 = vv;

    //deleting last element
    vv.pop_back(); 

    vector<int>v({1,2,3});
    vector<int>::iterator it = v.begin();  
    cout<<(*it)<<nl;
    it++;              //we can change the value of iterator
    cout<<(*it)<<nl;
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<(*it)<<" ";
    }
    

    //find the last element of a vector
    int n=v.size(); 
    auto lastelement = v.begin()+n-1;  
    cout<<*lastelement<<endl;
    auto lastele = --v.end();
    cout<<*lastele<<endl;
    vector<int>::iterator tt = vv.end();
    cout<<*(--tt)<<endl;

    //size of a unknown array 
    int ara[] = {1, 2, 3};
    int nn = sizeof(ara)/sizeof(ara[0]);

    //erase any element of an vector
    v.erase(v.begin()+1);

    //vectors of array
    vector<int>v[10]; //ten vector size 0

    //vectors of vector 
    vector<vector<int>> v;
    
    
    return 0;
}