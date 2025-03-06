#include<stdio.h>
#include <iostream>
using namespace std;
 long long A(long long n){
     if(n<10){//递归出口 
         return n;
     }else{
         long long JI=1;
         while(n!=0){
            if(n%10!=0){ 
                 JI*=n%10;
                 n/=10;
             }else
                 n/=10;
         }
         return A(JI);
     }
 }
 main(){
     long long x;
     scanf("%lld",&x);
     printf("%lld",A(x));
 }
