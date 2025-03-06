#include<stdio.h>
int main()
{
    float a,b;
    int s;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            s=((a/b)*10+5)/10;
            printf("%d\n",s);
        }
        if(b==0)
            printf("error\n");
    }
    return 0;
}
