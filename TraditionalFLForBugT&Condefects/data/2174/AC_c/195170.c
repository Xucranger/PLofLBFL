#include<stdio.h>
int main()
{
    int a,b;
    int d;
    while (scanf("%d %d",&a,&b)!=EOF) {
        if (b==0) {
            printf("error\n");
        }
        else if (b!=0)
        {
            d=(int)(((a*1.0)/(b*1.0))+0.5);
            printf("%d\n",d);
        }
    }
}
