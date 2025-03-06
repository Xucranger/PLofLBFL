#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            {
                d=b/2;
                c=(a+d)/b;
                printf("%d\n",c);
            }
    }
    return 0;
}
