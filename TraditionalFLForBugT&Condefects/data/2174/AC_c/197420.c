#include<stdio.h>
int main()
{
    int a,b,c2;
    double c,c1;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
    if(b==0)
        printf("error\n");
    else
    {
        c1=(double)a/b;
        c2=a/b;
        c=c1-c2;
    if(c<0.5)
        printf("%d\n",c2);
    else
        {
        c2=c2+1;
        printf("%d\n",c2);
        }
    }
    }
    return 0;
}
