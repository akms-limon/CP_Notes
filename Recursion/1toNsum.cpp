/**
 *    author: A K M S Limon
 *    created: 01-September-2023  15:03:33
**/
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return sum(n-1) + n;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n = 7;
    cout << sum(7) << '\n';
    return 0;
}