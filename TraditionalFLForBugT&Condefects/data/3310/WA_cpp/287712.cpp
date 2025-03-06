#include <math.h>
#include <iostream>
#define Pi 3.1415927
using namespace std;
int n;
double F_x(int a)
{
    if(a == 0){
        //printf("%.6f\n",sin((double)a/180*Pi);
        return sin(n*1.0/180*Pi);
    }
    else{
        return sin(F_x(a-1));
    }    
}            
int main()
{
     cin>>n;
     printf("%.6f\n",F_x(n));
     return 0;
 }    
