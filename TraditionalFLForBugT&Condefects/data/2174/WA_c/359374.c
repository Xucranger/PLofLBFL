#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(b==0)
        printf("error\n");
    else
        {
        c=a/b;
        printf("%d",c);
        }
}
