#include<stdio.h>
void main()
{double x,c;
 int a,b,z;
 while(scanf("%d %d",&a,&b)!=EOF)
 if(b!=0)
{
 c=(double)a/b;
 z=a/b;
 x=c-z;
if(2*x>=1)
printf("%d\n",z+1);
else
printf("%d\n",z);
}
else
printf("error\n");
}
