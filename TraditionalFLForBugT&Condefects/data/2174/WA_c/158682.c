#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)==2)
    {
         //c=a/b;
         if(b==0)//此处不能用赋值号
            printf("error\n");
          else
         {
             c=a/b;
             if(c>=5)
            printf("%d\n",c);
          else
            if(c<4)
                printf("0\n");
         }
    }
    return 0;
}
