#include<stdio.h>
int main()
{
    int a,i=0,j;
    float b,c;
    while(scanf("%d %f",&a,&b) !=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=a/b;
            printf("%.0f\n",c);
        }
    }
    return 0;
}
