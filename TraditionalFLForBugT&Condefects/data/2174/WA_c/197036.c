#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
          printf("error");
        else if(a%b>=0.5)
          printf("%d",a/b);
        else if(a%b<0.5)
          printf("%d",a/b);
        printf("\n");
    }
    return 0;
}
