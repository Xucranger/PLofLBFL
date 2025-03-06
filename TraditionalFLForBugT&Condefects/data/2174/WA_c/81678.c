#include<stdio.h>
void main()
{
   int i,a[2][2],b;
   for(i=0;i<2;i++)
   scanf("%d %d",&a[i][0],&a[i][1]); 
   for(i=0;i<2;i++)
   {if(a[i][1]==0)
    printf("error");
   else
   {b=a[i][0]/(1.0*a[i][1])+0.5;
   printf("%d\n",b);}
   }
}
