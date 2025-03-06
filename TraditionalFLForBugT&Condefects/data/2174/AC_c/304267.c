#include<stdio.h>
int main()
{
    int a,b,num;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b == 0)
            printf("error\n");
        else
        {
            num = (a+(b/2))/b;
            printf("%d\n",num);
        }
    }
    return 0;
}
