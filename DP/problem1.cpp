// একটা নাম্বার দেওয়া থাকবে ১০^৫ এর চেয়ে ছোট । নাম্বার টায় নিম্নক্ত অপারেশন করা যাবে 
// ১ বিয়োগ করা যাবে । 
// ২ দিয়ে ভাগ গেলে তাহলে ২ দিয়ে ভাগ করা যাবে 
// ৩ দিয়ে ভাগ গেলে তাহলে ৩ দিয়ে ভাগ করা যাবে 
// মিনিমাম কত অপারেশন এ নাম্বার টাকে ১ করা যাবে ??

/**
 *    author: A K M S Limon
 *    created: 29-July-2024  12:52:51
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
int steps[N];

int min_steps(int n) {
    if (n == 1) return 0;
    if (steps[n] != -1) return steps[n];
    int ans = min_steps(n - 1) + 1;
    if (n % 2 == 0) {
        ans = min(ans, min_steps(n / 2) + 1);
    }
    if (n % 3 == 0) {
        ans = min(ans, min_steps(n / 3) + 1);
    }
    steps[n] = ans;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    memset(steps, -1, sizeof steps);
    string s; cin >> s;
    min_steps(n);
    return 0;
}