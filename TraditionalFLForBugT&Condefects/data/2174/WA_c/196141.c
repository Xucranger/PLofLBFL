#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0) printf("ERROR\n");
        else printf("%d\n",a/b+(a*10/b+5)/10);
    }
}
