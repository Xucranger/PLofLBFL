#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    if(b==0)
       printf("error");
    else
    {  c=((float)a/b*10);
       e=c%10;
       if(e>=5)
          d=(a/b+1);
       else
          d=a/b;
       printf("%d",d);}
    return 0;
}
