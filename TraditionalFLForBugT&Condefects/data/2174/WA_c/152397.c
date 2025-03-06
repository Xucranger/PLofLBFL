#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    double d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error");
        else
        {
            d=a/b;
            c=round(d);
            printf("%d\n",c);
        }
    }
}
