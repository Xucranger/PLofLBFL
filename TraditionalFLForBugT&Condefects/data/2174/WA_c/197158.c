#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error");
        else if(c=a%b,c*2>=b)
            printf("%d",a/b+1);
        else
        {
            c=a%b;
            printf("%d",a/b);
        }
    }
   return 0;
}
