#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,c,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
       if(b!=0)
       {
           if(a>=b)
           {
              d=a%b;
              if((2*d)>=b)
              printf("%d\n",a/b+1);
              else
               printf("%d\n",a/b);
           }
          else
          {
              if((2*a)>=b)
                printf("%d\n",a/b+1);
              else
              printf("%d\n",a/b);
          }        
       }    
       else 
       printf("error\n");  
    }        
}     
