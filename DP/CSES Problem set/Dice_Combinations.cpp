#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e6 + 9;
ll dp[N];

ll combinatin(ll n) {
	dp[1] = 1, dp[2] = 2, dp[3] = 4,
	dp[4] = 8, dp[5] = 16, dp[6] = 32;
	if (dp[n] != -1) return dp[n];
	dp[n] = (combinatin(n - 1) % mod + combinatin(n - 2) % mod + 
	combinatin(n - 3) % mod + combinatin(n - 4) % mod + combinatin(n - 5) % mod +
	combinatin(n - 6) % mod) % mod;
	return dp[n];
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n;
    cin >> n;
    memset(dp, -1, sizeof dp);
    cout << combinatin(n) << '\n';
    return 0;
}