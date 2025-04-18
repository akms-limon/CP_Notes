//Count of different ways to express N as the sum of integers
// 1 <= N <= 1e3

// this is the bigO(n^2) solution, it can be solved in bigO(n) also
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e3 + 9;
ll ways[N];

ll count(int n) {
	if (n == 0) return 1;
	if (ways[n] != -1) return ways[n];
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += count(n - i);
		ans %= mod;
	}
	return ways[n] = ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    memset(ways, -1, sizeof ways);
    cout << count(1000) << '\n';
    return 0;
}


// iterative way to solve this problem