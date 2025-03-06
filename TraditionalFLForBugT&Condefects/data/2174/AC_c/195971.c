#include<stdio.h>
#include<math.h>
void main()
{
    float a,b;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
    if(b==0)
        printf("error\n");
    else
    {
        printf("%.0f\n",round(a/b));
    }
    }
}
