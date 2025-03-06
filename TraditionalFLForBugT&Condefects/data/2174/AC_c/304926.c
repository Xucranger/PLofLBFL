#include<stdio.h>
int main()
{
   int a,b;
   double c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error");
        else
            {
                c=(a*1.0)/b;
                int t=(int)(c+0.5);
                printf("%d",t);
            }
        printf("\n");
    }
    return 0;
}
