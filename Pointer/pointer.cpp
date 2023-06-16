#include<bits/stdc++.h>
using namespace std; 

void pointerincrement(int *x){
    (*x)++;
}

int main(){

    //code with luv
    int x=4; 
    int *p=&x; 
    cout<<"&x : "<<&x<<endl;
    cout<<"p : "<<p<<endl;
    cout<<"*p : "<<*p<<endl;
    *p=5; 
    cout<<"x : "<<x<<endl;
    cout<<"p+1 : "<<p+1<<endl;
    int **pp = &p;
    cout<<"&p : "<<&p<<endl;
    cout<<"pp : "<<pp<<endl;
    cout<<"*pp : "<<*pp<<endl;
    cout<<"**pp : "<<*pp<<endl;
    **pp=7;
    cout<<"x : "<<x<<endl;

    int a[10]; 
    a[0]=2;
    a[1]=4; 
    cout<<"a : "<< a<<endl;
    cout<<"&a[0] : "<<&a[0]<<endl;
    cout<<"*a : "<<*a<<endl;
    cout<<"a[0] : "<<a[0]<<endl;
    cout<<"a+1 : "<<a+1<<endl;
    cout<<"&a[1] : "<<&a[1]<<endl;
    cout<<"*(a+1) : "<<*(a+1)<<endl;
    cout<<"a[1] : "<<a[1]<<endl;

    //call in pointer
    int b = 5; 
    cout<<"b : "<< b<<endl;
    pointerincrement(&b);
    cout<<"b : "<<b<<endl;
    return 0;
}