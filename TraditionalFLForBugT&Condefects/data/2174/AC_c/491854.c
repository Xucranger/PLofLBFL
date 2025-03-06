#include<stdio.h>
void main()
{
int a,b,c,d;
while(scanf("%d%d",&a,&b)!=EOF)
  {
    if(b==0)
    printf("error\n");
    else
    {c=a/b;
    if(2*(a%b)>=b)
    d=1;
    else
    d=0;
    c=c+d;
    printf("%d\n",c);}
  }
}
