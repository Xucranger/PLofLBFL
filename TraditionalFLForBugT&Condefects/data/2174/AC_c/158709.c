#include <stdio.h>
int main()
{
    float a,b,c1,c3;
    int c2;
    while(scanf("%f %f",&a,&b)==2)
    {
         if(b==0)//此处不能用赋值号
            printf("error\n");
          else
         {
             c1=a/b;
             c2=a/b;
             c3=c1-c2;
             if(c3>=0.5)
             {
                 printf("%d\n",c2+1);
             }
             else
                if(c3<0.5)//<=0.4导致数据判断错误
                printf("%d\n",c2);
         }
    }
    return 0;
}
