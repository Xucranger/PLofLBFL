#include<stdio.h>
int main()
{
    float a,b;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
    if(b==0) printf("error\n");
    else    printf("%.0f\n",a/b);
    }
    return 0;
}
