#include<stdio.h>
#include<math.h>              
int main()
{
    float f;
    int n;
    while(scanf("%d",&n)!=EOF)
{ 
    if (n==0) 
    f=sin(0);   
    if(n>0) 
    {   f=sin(n);
        while(n!=1)
        {
            f=sin(f);
            n--;
        }
    }
    printf("%.6f\n",f);
}    
}        
