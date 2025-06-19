#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll low = 0, high = 1e18;
    while (low < high) {
        ll mid = (low + high + 1) / 2;
        ll dif = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= mid) {
                dif = (arr[i] - mid) + dif;
            }
        }
        if (dif >= m) {
            low = mid;
        } else if (dif < m) {
            high = mid - 1;
        }
    }
    cout << low << endl;
    return 0;
}

/**
 *
 * t t t f f f
    * so, mid = (low + high + 1) / 2  --> correct
 *
 * f f f t t t
    * mid = (low + high) / 2 --> correct
 */