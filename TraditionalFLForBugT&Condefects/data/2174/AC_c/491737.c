#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,k;
   double h;
    while(scanf("%d %d",&a,&b)!=EOF)
    {if(b==0)
     printf("error\n");
     else
     {h=(a*1.0)/b;
     k=(int)(h+0.5);
     printf("%d\n",k);}
    }
    return 0;
    }
