#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int n;
double f(int x){
    double tmp;
    if(x<=0)
        return sin(n);
    else
        return sin(f(x-1));
}
int main(){
    while(scanf("%d",&n)!=EOF)
    {
       printf("%.6f",f(n));
        cout<<endl;
    }
    return 0;
}
