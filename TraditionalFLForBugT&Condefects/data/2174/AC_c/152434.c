#include<stdio.h>
void main()
{
    float a,b,d;
    int c,n=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(n!=0)
        printf("\n");
        n=1;
        if(b==0)
        printf("error");
        else
        {
            c=a/b+0.5;
            printf("%d",c);
        }
    }
    return 0;
}
