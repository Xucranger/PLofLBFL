#include <stdio.h>
int main()
{
    int a,b,divid;
    while(scanf("%d%d",&a,&b)!=EOF)
    {   
        if(b!=0)
        {
            if(a*b>=0)
            {
                divid=1.0*a/b+0.5;
            }
            else
            {
                divid=1.0*a/b-0.5;
            }
            printf("%d\n",divid);
        }
        else
        {
            printf("error\n");
        }
    }
        return 0;
}
