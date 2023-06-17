/**
 *    author: A K M S Limon
 *    created: 14-March-2023  23:09:41
**/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool>isPrime(N, 1);

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i*i < N; i++) {
        if(isPrime[i]==true){
            for (int j = i*i; j < N; j+=i) {
                isPrime[j]=false;
            }
        }
    }   
    cout<<isPrime[0]<<endl;
    cout<<isPrime[1]<<endl;
    cout<<isPrime[2]<<endl;
    cout<<isPrime[3]<<endl;
    cout<<isPrime[4]<<endl;
    cout<<isPrime[5]<<endl;
    cout<<isPrime[6]<<endl;
    cout<<isPrime[7]<<endl;
        
    return 0;
}