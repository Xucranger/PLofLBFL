#include <stdio.h>
int main()
{
    float a,b,t;
    while(~scanf("%f%f",&a,&b))
    {
        if(b==0)
            printf("error\n");
        else
        {
            t=int ((a/b)+0.5);
             printf("%0.f\n",t);
        }
    }
    return 0;
}
