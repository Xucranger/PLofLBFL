#include<stdio.h>
int main()
{ int a,b,c,d;
while(scanf("%d %d",&a,&b)!=EOF)
{if(b==0)
printf("error");
else
{d=(c*10)/b;
if((d%10)>=5)
c=(a/b)+1;
else
c=a/b;
printf("%d\n",c);
}
}
return 0;
}
