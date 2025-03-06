#include<stdio.h>
int main()
{
  int a[100],n,i;
  scanf("%d",&n);
  for(i=0;i<2*n-1;i=i+2)
  { scanf("%d %d",&a[i],&a[i+1]);
  }
   for(i=0;i<2*n;i=i+2)
   { printf("%d\n",a[i]+a[i+1]);
   }
 } 
