#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=round((1.0*a)/b);
            printf("%d\n",c);
        }
    }
    return 0;
}
