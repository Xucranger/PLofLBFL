#include<math.h>
#include<stdio.h>
int main()
{
    float a,b,c;
    int d;
     while(scanf("%d %d",&a,&b)!=EOF)
     {
         if(b==0)
            printf("error\n");
         else
            {
                c=a/b;
                d=c;
                c=c-d;
                if(c<0.5)
                printf("%d\n",d);
                else
                printf("%d\n",d+1);
            }
     }
     return 0;
}
