#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int>st;
    st.insert(3);
    st.insert(2);
    st.insert(2);
    st.insert(1);
    st.insert(100);
    auto it = st.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;

    cout<<"print full set : "<<endl;
    for(auto x: st)
    {
        cout<<x<<" ";
    }nll;

    cout<<"min value : "<<(*st.begin())<<endl;

    cout<<"max value : "<<*(--st.end())<<endl;  //because st.end()==null, I mean st.end() is the null value after last value

    //erasing a value of a set
    st.erase(st.begin());

    cout<<"after erasing the begining value the set is : "<<endl;
    for(auto it : st)
    {
        cout<<it<<" ";
    }nll;

    //erasing using value 
    st.erase(100);

    cout<<"after erasing using the value : "<<endl;
    for(auto it : st)
    {
        cout<<it<<" ";
    }nll;

    //finding any value in set 
    auto itr = st.find(3);
    auto iter = st.find(1);
    if(itr!=st.end())
    {
        cout<<"3 exits\n";
    }
    if(iter == st.end())
    {
        cout<<"1 does not exit.\n";
    }

    // unordered set = unique but not sorted
    //multiset = similler to set but not unique

    cout<<"\nprinting multiset\n";
    multiset<int>ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);
    for(auto it : ms)
    {
        cout<<it<<" ";
    }nll;
    //make a master copy set 

    auto s = ms;
    cout<<"\nprint the copy set : "<<endl;
    for(auto it : s)
    {
        cout<<it<<" ";
    } nll;
    //erasing a value from multiset
    ms.erase(20);
    cout<<"\nafter erasing a value from multiset, when we erase a value from a multiset, all value of the same catagory is being deleted : "<<endl;
    for(auto it  : ms)
    {
        cout<<it<<" ";
    }
    //if we want to erase only one element from double elements

    s.erase(s.find(20));
    cout<<"after erasing any of one from reapeted elements : \n";
    for(auto it : s){
        cout<<it<<" ";
    }nll;
    
    return 0;
}