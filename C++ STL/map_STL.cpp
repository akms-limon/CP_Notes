#include <bits/stdc++.h>
using namespace std;

int main() {

    // ম্যাপ এর সব ভাল্যু বাই ডিফল্ট শুন্য দিয়ে ইনিশিয়ালাইজ করা থাকে
    map<int, int>mm;
    for(int i = 0; i<8; i++){
        cout<<mm[i]<<' ';
    } cout<<'\n';

    //insert value in map 
    map<int, string>mp;
    mp[2] = "two";  //O(log(n))
    mp[100] = "hundred"; //O(log(n))
    mp.insert({50, "fifty"});   //O(log(n))

    //printing map 
    for(auto it : mp){
        cout<<it.first<<' '<<it.second<<'\n';
    }

    //finding a key in map
    auto it = mp.find(2); //O(log(n))
    if(it == mp.end()){
        cout<<"No value"<<endl;
    }
    else {
        cout<<(*it).first<<' '<<it->second<<'\n';
    }

    //erasing a value from map
    //we have to erase value by this system becasue if the value is 
    //not present in the map it will give a gurbage value and it give a error
    auto t = mp.find(5); //O(log(n))
    if(t!=mp.end()){
        mp.erase(t);  //O(log(n))
    }

    //clear the whole map
    mp.clear();


    //Unordered_map
    unordered_map<int, string>m;
    //when we don't need the order that time we can use Unordered_map
    // unorder map time complexity is less then map. insert complexity is O(1)

    //If we need reverse of a map or set we can insert the value in map and set multiply by -1
    // and when we access this if we multiply again -1 we can get the main value. see my last 3 submissions of this problem
    // example : https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/


    return 0;
}