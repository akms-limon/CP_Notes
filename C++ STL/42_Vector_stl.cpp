#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.pop_back(); //deleting the last element of the vector

    vector<int>v({1,2,3});
    vector<int>::iterator it = v.begin();  
    cout<<(*it)<<nl;
    it++;              //we can change the value of iterator
    cout<<(*it)<<nl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<nl;
        // it++; //we can't change the value of const_iterator
    }
    
    int n=v.size();
    auto lastdisit = v.begin()+n-1;  //find the last disit of a vector

    //auto lastdisit = --v.end();  //find the last disit of a vector

    //reversing an array
    int ara[] = {1, 2, 3};
    int nn = sizeof(ara)/sizeof(ara[0]);
    reverse(ara, ara+nn);

    //reversing the vector
    reverse(v.begin(), v.end());
    //printing the vector easy away
    for(auto i : v)
    {
        cout<<i<<nl;
    }

    //printing the value of a vector using the address
    for(auto &i : v)
    {
        i=10; //if we change the value of i it will change the value of the vector
        cout<<i<<nl;
    }

    //reversing some elements of a vector
    reverse(v.begin(), v.begin()+2); //reverse first two value of a vector.

    //erase any element of an vector
    v.erase(v.begin());
    
    return 0;
}