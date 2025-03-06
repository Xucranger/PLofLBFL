#include<stdio.h>
int main()
{
    int d;
    float a,b,c;
    while (scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            d=a/b;
            c=a/b;
            if(c-d<0.5)
            {
               printf("%d\n",d);
            }
            else
            {
               d=d+1;
               printf("%d\n",d);
            }
        }
    }
    return 0;
}
