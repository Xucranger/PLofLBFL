#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            float s=round((a*1.0)/b);
            printf("%.0f",s);
        }
        if(b==0)
            printf("error\n");
    }
    return 0;
}
