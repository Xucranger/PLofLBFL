#include<stdio.h>
int main()
{
float a,b;
while(scanf("%f %f",&a,&b)!=EOF)
{if(b==0)
{
printf("error\n");
}
else
{
    int n;
    n=(int)(a/b+0.5);
printf("%d\n",n);
}
}
return 0;
}
