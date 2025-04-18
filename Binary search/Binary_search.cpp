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
 * low = 7 high = 8
 * mid is always 7 so we use (mid = (low + high + 1) / 2)
 *
 * t t t t f f f f - binary search format
 * 20 25 30 -  20
 * low = 0 high = 100
 *
 *
 * t t t f f f
    * for Maximum
    * low = mid (for true)
    * high = mid - 1;
    * low = 7 high = 8
    * mid = (low + high) / 2
    * mid = 7
    * if condition is true, low = 7
    * else, high = 6
    *
    * so, mid = (low + high + 1) / 2  --> correct
    * mid = 8
    * if codition is true, low = 8
    * else, high = 7
 *
 * f f f t t t
    * for minimum
    * low = mid + 1
    * high = mid (for true)
    * mid = (low + high) / 2 --> correct
    * low = 7 high = 8
    * mid = 7
    * if condition is true, high = 7
    * else, low = 8
 */