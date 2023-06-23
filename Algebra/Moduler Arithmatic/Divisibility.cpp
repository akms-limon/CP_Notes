/**
 *    author: A K M S Limon
 *    created: 18-June-2023  10:28:23
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /*********A number 1562 is divisible by k if************
    ((1*10000)%k+(5*100)%k+(6*10)%k+(2%k))%k == 0 */  


    /**************** Divisible by 2 ***************
     * ((1*10000)%2+(5*100)%2+(6*10)%2+(2%2))%2 == 0 here 10%2 = 0 Hence, (1*10000)%2+(5*100)%2+(6*10)%2=0
     * so, the main equation is : (0+(2%2))%2 == 0
    ১০, ১০০, ১০০০, ........10^k ২ দিয়ে ভাগ যায় তাই শুধু লাস্ট ডিজিট ২ দিয়ে ভাগ গেলেই সংখ্যাটি ২ দিয়ে ভাগ যাবে 
    **********Conclution : if(last_digit%2==0)*/


   /***************** Divisible by 5 ****************
    * if last digit is 0 or 5, logic is same as (divisible by 2);  */


    /**************** Divisible by 3  ***************
    ((1*10000)%3+(5*100)%3+(6*10)%3+(2%3))%3 == 0  here 10%3 = 1 Hence, (1*10000)%3+(5*100)%3+(6*10)%3+(2%3)= 1+5+6+2
     * so, the main equation is : (1+5+6+2)%3==0 
     ***********conclution : if(digit_sum%3==0) */

    
    /**************** Divisible by 9  ***************
    ((1*10000)%9+(5*100)%9+(6*10)%9+(2%9))%9 == 0  here 10%9 = 1 Hence, (1*10000)%9+(5*100)%9+(6*10)%9+(2%9)= 1+5+6+2
     * so, the main equation is : (1+5+6+2)%9==0 
     ***********conclution : if(digit_sum%9==0) */


    /**************** Divisible by 4 ****************
     * if the number is divisible by 2 for 2 times.*/


    /**************** Divisible by 6 ****************
     * if the number is divisible by 2 and 3.*/


    /**************** Divisible by 6 ****************
     * if the number is divisible by 2 and 3.*/   
    cout<<10%11<<endl; 
    return 0;
}