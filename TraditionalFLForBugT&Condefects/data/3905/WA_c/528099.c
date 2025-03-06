#include <stdio.h>
int main()
 {
 int a,n,c,x,sum=0;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
    scanf("%d",&a);
    for(int h=1;h<=a;h++)
      {
	    c=0;
       scanf("%d",&x);
       c=x;
       sum=c+sum;
       printf("%d\n",sum); 
	   }
 }
