#include<stdio.h>
int main()
{
    float a,b;
     int c;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error");
        else
        c=a/b+0.5;
        printf("%d",c);
    }
    return 0;
}
