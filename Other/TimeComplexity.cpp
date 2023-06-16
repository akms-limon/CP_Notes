#include<bits/stdc++.h>
using namespace std;

int main(){


        //******************************code with luv****************************// 


    //number of iterations = number of statement;
    int x; 
    int sum=0; 
    sum=x+x;
    //here iteration number is 3 so complexity is O(3)==O(1)

    int n; cin>>n; 
    //complexity is O(5)==O(1)
    for (int i = 0; i < n; i++){
        int y; 
        y=5; 
        y++;
    }
    //complexity is O(5)+O(3n)==O(n)

    //number of iteration in 1sec = 10^7 - 10^8







    //****************************** code with sohag  ******************************//


    int n; cin>>n;
    for (int i = 0; i < n; i++)   ////10^8 operation = 1 second
    {
        cout<<i<<endl;  //time complixity of this program is BIGO(n).
    }
    int n; cin>>n;      //10^8 operation = 1 second 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cout<<i<<endl; //time complixity of this program is BIGO(n^2).
        }
    }
    int n; cin>>n;      //10^8 operation = 1 second 
    for (int i = 0; i < n; i++)   {
        for (int j = 0; j < n; j++){
            cout<<i<<endl; //time complixity of this program is BIGO(n^2). actually time complixity is : n^2+n but n is negligible.
        }
    }
    for (int i = 0; i < n; i++){
        cout<<i<<endl;
    }
    int n; cin>>n;
    for (int i = 1; i < n; i*=2){
        cout<<i<<endl; //time complixity of this code is log2(n).
    }
}