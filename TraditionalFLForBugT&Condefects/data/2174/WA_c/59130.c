#include<stdio.h>
int main()
{int a,b,c;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
printf("error\n");
else
{c=(a*10000000)/(b*10000000);
printf("%d\n",c);
}
}	
}
