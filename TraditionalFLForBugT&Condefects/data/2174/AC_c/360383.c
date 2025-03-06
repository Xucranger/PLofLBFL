#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            c=a%b;
            float s;
            s=b/2.0;
            if(c<s)
            {
                printf("%d\n",a/b);
            }
            else
            {
                printf("%d\n",a/b+1);
            }
        }
    }
}
