#include<stdio.h>
void main()
{  int a[2],b[2],c[2];
   int i;
   scanf("%d %d",&a[0],&a[1]);
   scanf("%d %d",&b[0],&b[1]);
   for(i=0;i<2;i++)
   {  if(b[i]==0)
      printf("error\n");
      else
     { c[i]=1.0*a[i]/b[i];
      printf("%d\n",c[i]);
      }
   }
}
