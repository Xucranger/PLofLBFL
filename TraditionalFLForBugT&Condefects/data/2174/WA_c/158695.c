#include <stdio.h>
int main()
{
    float a,b,c1,c3;
    int c2;
    while(scanf("%d %d",&a,&b)==2)
    {
         if(b==0)//此处不能用赋值号
            printf("error\n");
          else
         {
             c1=a/b;
             c2=c1;
             c3=c1-c2;
             if(c3>=0.5)
             {
                 printf("%d\n",c2+1);
             }
             else
                if(c1<=0.4)
                printf("%d\n",c2);
         }
    }
    return 0;
}
