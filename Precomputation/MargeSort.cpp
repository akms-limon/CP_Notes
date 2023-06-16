/**
 *    author: A K M S Limon
 *    created: 12-May-2023  10:33:34
**/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];

void marge(int i, int r, int mid){
    int l_sz = mid - l+1;
    int L[l_sz+1];
    int r_sz = r-mid;
    int R[r_sz+1];
    for (int i = 0; i < l_sz; i++) {
        L[i] = a[i+l];
    }
    for (int i = 0; i < r_sz; i++) {
        R[i] = a[i+mid+1];
    }
    L[l_sz]=R[r_sz] = INT_MAX;
    for (int i = l; i <=r ; i++) {
        if(L[])
    }
    
}

int main() {
    
      
    return 0;
}