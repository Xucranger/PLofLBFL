#include <stdio.h>
void  main()
{
int a,b;
float c;
while(scanf("%d %d",&a,&b)!=EOF)
if(b==0)
printf("error\n");
else
{
    c=(float)(a)/(float)(b);
    printf("%d\n",(int)(c+0.5));
    }
}
