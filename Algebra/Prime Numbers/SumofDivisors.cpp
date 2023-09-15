/**
 *    author: A K M S Limon
 *    created: 16-September-2023  01:36:40
**/
#include <bits/stdc++.h>
using namespace std;

long long SumOfDivisors(long long num) {
    long long total = 1;

    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int cnt = 0;
            while (num % i == 0) {
                cnt++;
                num /= i;
            }
            long long sum = 0, pow = 1;
            while (cnt-- >= 0) {
                sum += pow;
                pow *= i;
            }
            total *= sum;
        }
    }
    if (num > 1) {
        total *= (1 + num);
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long num = 12; 
    cout << SumOfDivisors(num) << '\n';
    return 0;
}