#include<stdio.h>
void main()
{
int a,b,c,x,y,z;
scanf("%d %d\n",&a,&b);
scanf("%d %d",&x,&y);
if(b!=0)
{c=a/b;
printf("%d\n",c);
}
else printf("error");
if(y!=0)
{z=x/y;
printf("%d\n",z);
}
else printf("error");
}
