#include<stdio.h>
int main()
{
int a,b,m,n;
while(scanf("%d %d",&a,&b)!=EOF)
{
    if(b==0)
printf("error\n");
    else
{
    m=a/b;
    n=a%b;
    if(2*n<b)
        printf("%d\n",m);
    else
        printf("%d\n",m+1);
}
}
return 0;
}
