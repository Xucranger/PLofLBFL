#include<stdio.h>
int main()
{
    int n;
    float a,b;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
    if(b==0)
        printf("ERROR");
    else
    {n=((a/b)*10+5)/10;
    printf("%d\n",n);
    }
    }
    return 0;
}
