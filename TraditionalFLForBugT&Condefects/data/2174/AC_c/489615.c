#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,e;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            c=a%b;e=a/b;
            if(2*c>=b)
            {
                e=e+1;
                printf("%d\n",e);
            }
            else
            printf("%d\n",e);
        }
        else
        printf("error\n");
    }
    return 0;
}
