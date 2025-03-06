#include <stdio.h>
int main()
{
int a,b,n;
while(scanf("%d %d",&a,&b)!=EOF)
if(b==0)
printf("error\n");
else
    {
n=(a+b/2)/b;
printf("%d\n",n);
}
return 0;
}
