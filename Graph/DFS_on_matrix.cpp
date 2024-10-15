/**
 *    author: A K M S Limon
 *    created: 28-August-2024  02:57:45
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

//problem link: https://lightoj.com/problem/guilty-prince

const int N = 21;
char matrix[N][N];
int n, m, cnt = 0;

void dfs(int sr, int sc) {
    if (sr < 0 || sc < 0 || sr >= n || sc >= m || matrix[sr][sc] != '.') {
        return;
    }
    cnt++;
    matrix[sr][sc] = '#';
    dfs(sr, sc + 1);
    dfs(sr + 1, sc);
    dfs(sr - 1, sc);
    dfs(sr, sc - 1);
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        cin >> m >> n;
        int sr, sc;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
                if (matrix[i][j] == '@') {
                    sr = i, sc = j;
                    matrix[i][j] = '.';
                }
            }
        }
        dfs(sr, sc);
        cout << "Case " << cs++ << ": " << cnt << '\n';
        cnt = 0;
    }
    return 0;
}