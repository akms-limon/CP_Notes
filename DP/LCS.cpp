/* you are given two strings. you have to print the longest common subsequence(lcs)
of this two strings */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 3e3 + 9;
string a, b;
int dp[N][N];

int lcs(int i, int j) {
	if (i == a.size() or j == b.size()) return 0;
	if (dp[i][j] != -1) return dp[i][j];
	int ans = max(lcs(i + 1, j), lcs(i, j + 1));
	if (a[i] == b[j]) {
		ans = max(ans, lcs(i + 1, j + 1) + 1);
	}
	return dp[i][j] = ans;
}

void print(int i, int j) {
	if (i == a.size() or j == b.size()) return;
	if (a[i] == b[j]) {
		cout << a[i];
		print(i + 1, j + 1);
	}
	else {
		int x = lcs(i + 1, j);
		int y = lcs(i, j + 1);
		if (x >= y) {
			print(i + 1, j);
		}
		else {
			print(i, j + 1);
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> a >> b;
    memset(dp, -1, sizeof dp);
    print(0, 0);
    return 0;
}