#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,t=0;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
        if(b==0)
        {
            printf("error\n");
            return 0;
        }
        t=(a+b/2)/b;
        printf("%d\n",t);
   }
    return 0;
}
