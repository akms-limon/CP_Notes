//time complexity of this problem is O(N^2)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3 + 9;
int n, a[N], dp[N];

int lis(int i) {
	if (dp[i] != -1) return dp[i];
	int ans = 1;
	for (int j = 0; j < i; j++) {
		if (a[i] > a[j]) {
			ans = max(ans, lis(j) + 1);
		}
	}
	return dp[i] = ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    memset(dp, -1, sizeof dp);
    int ans = 1;
    for (int i = 0; i < n; i++) {
    	ans = max(ans, lis(i));
    }
    cout << ans << '\n';
    return 0;
}