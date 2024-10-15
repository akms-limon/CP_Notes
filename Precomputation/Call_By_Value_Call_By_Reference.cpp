/**
 *    author: A K M S Limon
 *    created: 22-December-2022  22:58:38
**/
#include <bits/stdc++.h>
using namespace std;

int callbyvalue(int n){
    n++;
    return n;
}

void callbyreference(int &n){
    n++;
}

void swapbyvalue(int p, int q){
    int temp = p; 
    p = q;
    q = temp;
}

void swapbyreference(int &p, int &q){
    int temp = p; 
    p = q;
    q = temp;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int a=3;
        cout<<"Before increase a = "<<a<<endl;

        callbyvalue(a); //কল বাই ভ্যালু মেইন ফাংশনে কোন ভ্যারিয়েবলের মান পরিবর্তন করতে পারে না ।
        cout<<"After increase by value a = "<<a<<endl;

        callbyreference(a); //কল বাই রেফারেন্স মেইন ফাংশন ভ্যারিয়েবলের মান পরিবর্তন করতে পারে ।
        cout<<"After increase by reference a = "<<a<<endl;

        int b = 10, c = 20;
        cout<<"Before swaping b = "<<b<<" c = "<<c<<endl;

        swapbyvalue(b, c);
        cout<<"after swaping b and c by value : b = "<<b<<' '<<"c = "<<c<<endl;

        swapbyreference(b, c);
        cout<<"after swaping b and c by reference : b = "<<b<<' '<<"c = "<<c<<endl;
    return 0;
}