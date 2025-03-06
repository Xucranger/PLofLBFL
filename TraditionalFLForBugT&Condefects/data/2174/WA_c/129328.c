#include<stdio.h>
void main()
{  int a[2],b[2],c[2];
   int i;
   scanf("%d %d",&a[0],&b[0]);
   scanf("%d %d",&a[1],&b[1]);
   for(i=0;i<2;i++)
   {  if(b[i]==0)
      printf("error\n");
      else
     { c[i]=1.0*a[i]/b[i]+0.5;
      printf("%d\n",c[i]);
      }
   }
}
