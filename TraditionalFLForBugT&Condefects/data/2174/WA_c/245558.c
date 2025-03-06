#include<stdio.h>
void main()
{int a,b;
double c;
while(scanf("%d%d",&a,&b)!=EOF)
{if(b==0) printf("error");
else
{
c=(1.0*a)/b;
printf("%.lf\n",c);
}
}
}
