#include<stdio.h>
int main()
{
    int a,b;
    int c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
            continue;
        }
        else
        {
            c=a/b;
            if((a*1.0)/b-c>=0.5)
            c++;
            printf("%d\n",c);
        }
    }
    return 0;
}
