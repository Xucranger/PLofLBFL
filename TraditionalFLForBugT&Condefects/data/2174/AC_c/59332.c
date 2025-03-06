#include<stdio.h>
int main()
{float a,b,d;
int c;
while(scanf("%f %f",&a,&b)!=EOF)
{if(b==0)
printf("error\n");
else
{d=a/b+0.5;
c=(int)d;
printf("%d\n",c);
}
}
}
