#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error");
        else
        {
            c=a/b;
            printf("%.0f\n",c);
        }
    }
    return 1;
}
