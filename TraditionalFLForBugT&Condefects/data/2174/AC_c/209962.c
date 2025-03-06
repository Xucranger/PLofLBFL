#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
            continue;
        }
        int s=a%b;
        if(s*2>=b)  printf("%d\n",a/b+1);
        else    printf("%d\n",a/b);
    }
    return 0;
}
