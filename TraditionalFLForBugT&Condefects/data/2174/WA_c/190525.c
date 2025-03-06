#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error\n");
        else
        {
            c=1.0*a/b;
            c=c-a/b;
            if(c>=0.5)
                printf("%d",a/b+1);
            else printf("%d",a/b);
        }
    }
return 0;
}
