#include<stdio.h>
void main()
{
    int a,b;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
    if(b==0)
        printf("error");
    else
    {
        c=a*1.0/b*1.0;
        printf("%.0f\n",c);
    }
    }
}
