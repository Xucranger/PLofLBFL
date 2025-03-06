#include<stdio.h>
int main()
{
    int a,b;
    double c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=1.0*a/b;
            int d=(int)(c+0.5);
            printf("%d\n",d);
        }
    }
    return 0;
}
