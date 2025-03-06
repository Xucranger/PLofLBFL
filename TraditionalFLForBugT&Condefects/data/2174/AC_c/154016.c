#include <stdio.h>
int main()
{int c;
    float a,b;
while(scanf("%f %f",&a,&b)!=EOF)
if(b!=0)
{
c=a/b+0.5;
printf("%d\n",c);}
else printf("error\n");
return 0;
}
