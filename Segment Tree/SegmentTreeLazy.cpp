/**
 *    author: A K M S Limon
 *    created: 30-August-2023  22:05:09
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int const N = 1e5;
ll a[N];
ll t[4 * N];
ll lazy[4 * N];

void build(int n, int b, int e) {
    lazy[n] = 0;
    if (b == e) {
        t[n] = a[b];
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}
 
void push(int n, int b, int e) {
    if (lazy[n] == 0) {
        return;
    }
    t[n] += lazy[n] * (e - b + 1);
    if (b != e) {
        int l = n * 2, r = n * 2 + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void upd(int n, int b, int e, int i, int j, ll x) {
    push(n, b, e);
    if (j < b || e < i) {
        return;
    }
    if (i <= b && e <= j) {
        lazy[n] = x;
        push(n, b, e);
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2; 
    upd(l, b, mid, i, j, x), upd(r, mid + 1, e, i, j, x);
    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j) {
    push (n, b, e);
    if (i > e || b > j) {
        return 0;
    }
    if (i <= b && e <= j) {
        return t[n];
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2; 
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
      
    return 0;
}