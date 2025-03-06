#include<stdio.h>
int main()
{
    int a,b;
    double c;
    while (scanf("%d",&a)!=EOF)
    {
    scanf("%d",&b);
    c=(double)a/b;
        if(b==0)
        {
            printf("error\n");
        }
    else if((int)(c*10)%10>=5)
    {
        printf("%d\n",(int)c+1);
    }
    else
    {
        printf("%d\n",(int)c);
    }}
}
