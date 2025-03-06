#include<stdio.h>
void main()
{
    float a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    if(b==0)
        printf("error\n");
    else
    {
        int c;
        float d;
        c=a/b;
        d=a/b;
        if((d-c)<0.5)
        {
            printf("%d\n",c);
        }
        else
            printf("%d\n",c+1);
    }
}
