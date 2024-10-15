//0/1 knapsack with dp

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 105;
#define int long long
int n, W, w[N], v[N], dp[N][100005];

int recur(int i, int weight) {
	if (i == n) return 0;
	if (dp[i][weight] != -1) return dp[i][weight];
	int ans = recur(i + 1, weight);
	if (w[i] + weight <= W) ans = max(ans, recur(i + 1, weight + w[i]) + v[i]);
	dp[i][weight] = ans;
	return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> W;
    for (int i = 0; i < n; i++) {
    	cin >> w[i] >> v[i];
    }
    memset(dp, -1, sizeof dp);
    cout << recur(0, 0) << '\n';
    return 0;
}