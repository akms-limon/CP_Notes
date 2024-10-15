/**
 *    author: A K M S Limon
 *    created: 26-March-2024  14:09:10
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    o_set <int> s;
    s.insert(6);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(13);
    s.insert(10);

    auto it = s.find_by_order(3); // 3rd number of the set
    cout << (*it) << '\n';

    int x = s.order_of_key(8); // number of elements less than 3
    cout << x << '\n';
    for (auto it : s) {
        cout << it << ' ';
    }
    return 0;
}