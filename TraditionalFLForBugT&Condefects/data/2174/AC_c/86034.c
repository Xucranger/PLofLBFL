#include<stdio.h>
int main()
{
    int a,b,c,e,f;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
         if(b==0)
         {
             printf("error\n");
         }
         else
         {
             c=a/b;
             e=a%b;
             f=e*2/b;
             if(f>=1)
             c=c++;
             printf("%d\n",c);
         }
    }
        return 0;
}
