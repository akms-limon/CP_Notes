#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS_Multiset;

int main() {
    PBDS_Multiset ms;

    ms.insert(5);
    ms.insert(5);
    ms.insert(5);

    // Multiset before deletion: {3, 5, 5}
    cout << "Multiset: ";
    for (auto x : ms) cout << x << " "; // Output: 3 5 5
    cout << endl;

    // Erase one occurrence of 5
    ms.erase(ms.find_by_order(ms.order_of_key(5))); // find_by_order returns iterator to 5

    // Multiset after deletion: {3, 5}
    cout << "Multiset after erasing one 5: ";
    for (auto x : ms) cout << x << " "; // Output: 3 5
    cout << endl;

    return 0;
}
