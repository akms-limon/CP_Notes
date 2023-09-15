/**
 *    author: A K M S Limon
 *    created: 05-June-2023  03:35:21
**/
#include <bits/stdc++.h>
using namespace std;

long long numberOfDivisors(long long num) {
    long long total = 1;
    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            while (num % i == 0) {
                e++;
                num /= i;
            }
            total *= e + 1;
        }
    }
    if (num > 1) {
        total *= 2;
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    //একটা নাম্বারের মাক্সিমাম কিউবিক রুট টা ডিভিজর থাকতে পারে । ১০^১৮ এর ১০^৬ টা এবং ১০^৯ এর ১০^৩ টা ডিভিজর থাকতে পারে মাক্সিমাম ।
    int n = 12;
    cout << numberOfDivisors(n) << '\n';

    /*Only square numbers divisor count is Odd because a * a = a^2  So, here the point 2 same 
    divisors multiplication is = a ^ 2. So that here the divisors decrease by 1. So square numbers divisor
    count is ODD.*/
    return 0;
}