#include<stdio.h>
int main()
{
    int a,c,i=0,j;
    float b;
    while(scanf("%d %f",&a,&b) !=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=(a+b/2)/b;
            printf("%d\n",c);
        }
    }
    return 0;
}
