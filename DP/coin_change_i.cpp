// use minimum number of coins to make total amount
// problem link : https://leetcode.com/problems/coin-change/description/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, inf = 1e9 + 7;
int n, a[N], dp[N];

int coin_change(int amount) {
	if (dp[amount] != -1) return dp[amount];
	if (amount == 0) return 0;
	int ans = inf;
	for (auto coin : a) {
		if (amount - coin >= 0)
		ans = min(ans, coin_change(amount - coin) + 1);
	}
	return dp[amount] = ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    int amount; cin >> amount;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    memset(dp, -1, sizeof dp);
    cout << coin_change(amount) << '\n';
    return 0;
}