/**
 *    author: A K M S Limon
 *    created: 24-July-2024  13:12:19
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5;
int f[N];

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (f[n] != -1) return f[n];
    return f[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    memset(f, -1, sizeof f);
    cout << fibo(3) << '\n';
    return 0;
}