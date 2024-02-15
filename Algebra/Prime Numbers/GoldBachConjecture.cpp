/**
 *    author: A K M S Limon
 *    created: 16-February-2024  02:03:43
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e7 + 10;
vector<int> isprime(N);
vector<int> primes;

void sieve() {
    isprime[0] = isprime[1] = 1;
    for (int i = 2; i < N; i++) {
        if (isprime[i] == 0) {
            for (int j = i * 2; j < N; j+= i) {
                isprime[j] = 1;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (isprime[i] == 0) {
            primes.push_back(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    /* every even number can be expressed as a sum of two prime number, 
    as it is not proved wet, so that it is called conjecture. 
    On the other hand for Odd number tow case is available :
    1. 2 + a prime
    2. 3 + two prime(even number)       */

    // problem link : https://lightoj.com/problem/goldbach-s-conjecture
    
    sieve();
    int t; cin >> t;
    int cs = 1;
    while (t--) {
        int n; cin >> n;
        int ans = 0;
        for (int i = 0; i < primes.size(); i++) {
            if (primes[i] >= n) break; 
            if (isprime[n - primes[i]] == 0 && primes[i] <= n - primes[i]) {
                ans++;
            }
        }
        cout << "Case " << cs++ << ": " << ans << '\n';
    }
    return 0;
}