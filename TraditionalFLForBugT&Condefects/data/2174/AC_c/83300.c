#include<stdio.h>
int main()
{
    float a,b;int c;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0.0)
        {
            printf("error\n");
            continue;
        }
        c=(int)(a/b+1./2);
        printf("%d\n",c);
    }
    return 0;
}
