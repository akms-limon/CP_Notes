/**
 *    author: A K M S Limon
 *    created: 24-July-2024  13:12:19
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5;
int f[N];
bool is_calculate[N];

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (is_calculate[n]) return f[n];
    f[n] = fibo(n - 1) + fibo(n - 2);
    is_calculate[n] = true;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cout << fibo(40) << '\n';
    return 0;
}