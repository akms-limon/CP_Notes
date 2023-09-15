/**
 *    author: A K M S Limon
 *    created: 30-August-2023  22:05:09
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int const N = 1e5;
ll a[N];
ll tree[4*N];
ll lazy[4*N];

void build(int node, int b, int e){
    lazy[node]=0; //change this
    if (b == e){
        tree[node] = a[b];
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid+1, e);
    tree[node] = tree[l] + tree[r];
}

void push(int node, int b, int e){
    if(lazy[node] == 0) return;
    tree[node] += lazy[node] * (e - b + 1);
    if(b != e){
        int l = node * 2, r = node * 2 + 1;
        lazy[l] += lazy[node];
        lazy[r] += lazy[node];
    }
    lazy[node] = 0;
}

void upd(int node, int b, int e, int i, int j, ll x){
    push(node, b, e);
    if(j < b || e < i) return;
    if(i <= b && e <= j){
        lazy[node] = x;  //set lazy
        push(node, b, e);
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2; 
    upd(l, b, mid, i, j, x), upd(r, mid+1, e, i, j, x);
    tree[node] = tree[l] + tree[r];
}

ll query(int node, int b, int e, int i, int j){
    push(node, b, e);
    if(i > e || b > j) return 0;
    if(i <= b && e <= j) return tree[node];
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2; 
    return query(l, b, mid, i, j)+query(r, mid+1, e, i, j);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
      
    return 0;
}