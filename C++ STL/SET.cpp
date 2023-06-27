#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int>st;
    st.insert(3);  //O(log(n))
    st.insert(2);  //O(log(n))
    st.insert(2);
    st.insert(1);
    st.insert(100);

    for(auto x: st) {
        cout<<x<<" ";
    }cout<<endl;

    //erasing a value of a set
    st.erase(st.begin());

    //erasing using value 
    st.erase(100);

    //finding any value in set 
    auto it = st.find(3);
    if(it!=st.end()) {
        cout<<(*it)<<'\n';
        st.erase(it);
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
    }cout<<endl;
    //make a master copy set 

    auto s = ms;
    cout<<"\nprint the copy set : "<<endl;
    for(auto it : s)
    {
        cout<<it<<" ";
    } cout<<endl;
    //erasing a value from multiset
    ms.erase(20);
    cout<<"\n after erasing a value from multiset, when we erase a value from a multiset, all value of the same catagory is being deleted : "<<endl;
    for(auto it  : ms)
    {
        cout<<it<<" ";
    } cout<<endl;
    //if we want to erase only one element from double elements

    s.erase(s.find(20));
    cout<<"after erasing any of one from reapeted elements : \n";
    for(auto it : s){
        cout<<it<<" ";
    }cout<<endl;
    
    return 0;
}