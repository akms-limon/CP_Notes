#include<bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    double d = 2.123456789101112131415, e=2.45;
    cout<<"Print the value of d using setprecision : "<<setprecision(5)<<d<<endl;
    cout<<"Print the value of d using fixed and setprecision : "<<fixed<<setprecision(5)<<d<<endl<<endl; //fixed means at any cost we have to print 5 digit. if not available print 0 at those digit.
    cout<<"Print the value of e using setprecision : "<<setprecision(5)<<e<<endl;
    cout<<"Print the value of e using fixed and setprecision : "<<fixed<<setprecision(5)<<e<<endl<<endl;
    double a = pow(5, 4);
    cout<<"The value of 5^4 without setprecision : "<<a<<endl;
    cout<<"The value of 5^4 using setprecision : "<<fixed<<setprecision(2)<<a<<endl<<endl;
    double b= log2(64);
    cout<<"The value of log2(64) without setprecision : "<<b<<endl;
    cout<<"The value of log2(64) using setprecision : "<<fixed<<setprecision(2)<<b<<endl<<endl;
    return 0;
}