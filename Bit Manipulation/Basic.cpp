/**
 *    author: A K M S Limon
 *    created: 23-April-2023  14:21:20
**/
#include <bits/stdc++.h>
using namespace std;

void printBinary(long long a){
    for (int i = 15; i >=0 ; i--) {
        cout<<((a>>i)&1);
    }
    cout<<'\n';
}

int main() {
    
    cout<<INT_MAX<<endl;   //Maximum value of int data type..
    cout<<(1LL<<31)-1<<'\n'; //Signed integer
    cout<<(1LL<<32)-1<<'\n'; //for Unsined integer
    long long a=10, b=25;
    cout<<a<<" "<<b<<'\n';
    cout<<(a|b)<<'\n';
    cout<<(a&b)<<'\n';
    cout<<(a^b)<<'\n';
    cout<<(a<<1)<<'\n';
    cout<<(b>>1)<<'\n';
    printBinary(b);
    printBinary(~b);  //Tilda operator, 0 ke 1 kore dey, 1 ke 0 kore dey.
    if((b>>40)&1){
        cout<<"40th bit is on."<<'\n';
    }
    else {
        cout<<"40th bit is off."<<'\n';
    }
    int k = 5;
    b = (b|(1<<k)); //setting the kth bit to 1
    b = (b&((1LL<<62)-1-(1<<k)))<<'\n';  //seting the kth bit to 0
    b = (b&(~(1<<k))); //seting the kth bit to 0
    int n = 3;

    //lower case to upper case letter :
    char c  = 'a';
    cout<< (c|' ')<<endl;
    char ch = 'D';
    cout<<(c)<<endl;
    return 0;

}