//Count of different ways to express N as the sum of 1, 3
// 0 <= N <= 1e5

//recursive way to solve this problem
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 9, mod = 1e9 + 7;
ll ways[N];

ll count(ll i) {
	if (i == 0) return 1;
	if (i == 1) return 1;
	if (i == 2) return 1;
	if (ways[i] != -1) return ways[i];
	return ways[i] = (count(i - 1) % mod + count(i - 3) % mod) % mod;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	memset(ways, -1, sizeof ways);
	cout << count(6636) << '\n';
	return 0;
}


// // Iterative way to solve this problem 

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// const ll N = 1e5 + 9, mod = 1e9 + 7;
// ll dp[N];

// ll count(ll n) {
// 	dp[0] = dp[1] = dp[2] = 1;
// 	for (int i = 3; i <= n; i++) {
// 		dp[i] = (dp[i - 1] % mod + dp[i - 3] % mod) % mod;
// 	}
// 	return dp[n];
// }

// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//     cout << count(6636) << '\n';
//     return 0;
// }