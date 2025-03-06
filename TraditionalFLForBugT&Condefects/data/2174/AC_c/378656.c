#include <stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f %f",&a,&b)!=EOF)
{
    if(b==0)
        printf("error\n");
    else
    {
        c=a/b;
        int i=(int)(c+0.5);
        printf("%d\n",i);
    }
}
}
