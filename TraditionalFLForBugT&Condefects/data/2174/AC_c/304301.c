#include <stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        if(b == 0)
        {printf("error\n");continue;}
        double temp = a/b;
        int temp2 =a/b;
        if(temp - temp2 >= 0.5)
            printf("%d\n",temp2 + 1);
        else
            printf("%d\n",temp2);
    }
    return 0;
}
