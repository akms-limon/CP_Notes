#include<bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    double d = 2222.123456789101112131415, e=2.45;
    cout<<setprecision(5)<<d<<endl;  //setprecision means total digit before and after decimal point
    cout<<fixed<<setprecision(5)<<d<<endl<<endl; //fixed set precision means fixed digit after decimal point
    //fixed means at any cost we have to print 5 digit. if not available print 0 at those digit.
    return 0;
}