#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    while(scanf("%d%d",&a,&b)!=EOF)
   {
       if(b==0)
    {
        printf("error\n");
    }
   else
    {
        d=1.00*a/b+0.5;
        c=d;
       printf("%d\n",c);
    }
   }
    return 0;
}
