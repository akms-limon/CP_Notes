/**
 *    author: A K M S Limon
 *    created: 24-July-2024  13:04:14
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int sum(int n) {
    if (n == 0) return 0;
    int ans = sum(n - 1);
    return ans + n;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cout << sum(10) << '\n';
    return 0;
}