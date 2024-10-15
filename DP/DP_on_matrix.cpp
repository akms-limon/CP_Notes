/*you are given a n * m grid a[n][m], you have to go from (1, 1) to (n, m). the values of 
all a[i][j] are given. you can go from one (i, j) to the down and the right, you have to 
ans the minimum cost to reach the point (n, m) and print the path which costs minimum*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int inf = INT_MAX;
int n, m, a[1005][1005];
int dp[1005][1005];

int min_cost(int i, int j) {
    if (i == n or j == m) return inf;
    if (i == n - 1 and j == m - 1) return a[i][j];
    if (dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = a[i][j] + min(min_cost(i + 1, j), min_cost(i, j + 1));
}

void path(int i, int j) {
    cout << '(' << i << ',' << j << ')' << "-> ";
    if (i == n - 1 and j == m - 1) return;
    int right = min_cost(i, j + 1);
    int down = min_cost(i + 1, j);
    if (right <= down) {
        path(i, j + 1);
    }
    else {
        path(i + 1, j);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    cout << min_cost(0, 0) << '\n';
    path(0, 0);
    return 0;
}