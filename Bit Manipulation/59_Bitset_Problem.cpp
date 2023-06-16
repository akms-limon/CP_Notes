/**
 *    author: A K M S Limon
 *    created: 04-May-2023  23:11:43
**/
#include <bits/stdc++.h>
using namespace std;

set<int>s[1005];
bitset<1005>bs[1005];
int main() {

    // ১০০০টি ১০০০ সাইজের array দেওয়া আছে । যেই ২ টি array তে সব চেয়ে বেশি কমন উপাদান আছে । সেই কমন উপাদান এর সংখ্যা প্রিন্ট করতে হবে ।
    // array এর প্রত্যেকটা উপাদান<1000 হবে ।
    int n = 2;
    s[0] = set<int>({1, 2, 3, 6});
    s[1] = set<int>({1, 3, 5});
    for (int i = 0; i < n; i++) {
        for(auto it : s[i]){
            bs[i][it] = 1;
        }
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {    //This line time complexity is n
        for (int j = i+1; j < n ; j++) { //This line time complixity is n
            int cnt = (bs[i]&bs[j]).count();  //This line time complexity is : (max(b[i], b[j])/32);
            ans = (ans, cnt);                  
        }
    }                      //total time complexity is : n*n*(n/32) = 1000*1000*(1000/32) = 3*10e7
    cout<<ans<<'\n'; 
    cout<<"Time Complixity of this code is : "<<1000*1000*(1000/32)<<endl;
    return 0;
}