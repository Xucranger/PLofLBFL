#include<stdio.h>
#include<math.h>              
int main()
{
    double f;
    int n;
    while(scanf("%d",&n)!=EOF)
{ 
    if (n==0) 
    f=sin(0);   
    if(n>0) 
    {   f=n;
        while(n>=0)
        {
            f=sin(f);
            n--;
        }
    }
    printf("%.6lf\n",f);
}    
}        
