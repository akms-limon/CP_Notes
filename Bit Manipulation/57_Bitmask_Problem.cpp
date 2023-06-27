/**
 *    author: A K M S Limon
 *    created: 04-May-2023  21:03:53
 **/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<ll> s[1000];
ll mask[1000];
int main()
{
    // ১০০০টি ১০০০ সাইজের set দেওয়া আছে । যেই ২ টি set তে সব চেয়ে বেশি কমন উপাদান আছে । সেই কমন উপাদান এর সংখ্যা প্রিন্ট করতে হবে ।
    // set এর প্রত্যেকটা উপাদান<৬০ হবে ।
    int n = 2;
    s[0] = set<ll>({1, 2, 3, 6});
    s[1] = set<ll>({1, 3, 5});
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto it : s[i])
        {
            mask[i] |= (1 << it);
        }
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cout << mask[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int one = __builtin_popcount(mask[i] & mask[j]);
            ans = max(ans, one);
        }
    }
    cout << ans << endl;
    return 0;
}