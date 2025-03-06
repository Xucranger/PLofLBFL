#include<stdio.h>
int main()
{
    float a,b,m;
    int n;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0)
        {    
            printf("error");
        }
        m=a/b;
        n=a/b;
        if((m-n)*10>=5)
            printf("%d\n",n+1);
        else
            printf("%d\n",n);
    }
    return 0;
}
