#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,c;
    for(i=0;i<2;i++)
    {
       scanf("%d %d",&a,&b);
       if(b!=0)
       {
           c=(a+1)/b;
           printf("%d\n",c);
       }    
       else
       printf("error");
    }    
}     
