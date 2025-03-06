#include <math.h>
#include <iostream>
#define Pi 3.1415926536
using namespace std;
int n;
float F_x(int a)
{
    if(a == 0){
        //printf("%.6f\n",sin((double)a/180*Pi);
        return sin(n*1.0);
    }
    else{
        return sin(F_x(a-1));
    }    
}            
int main()
{
     cin>>n;
     double ans = sin(n*1.0);
     for(int i=n-1;i>=0;i--)
     {
         ans = sin(ans);
     }    
     //printf("%.6f\n",F_x(n));
     printf("%.6f\n",ans);
     //system("pause");
     return 0;
 } 
