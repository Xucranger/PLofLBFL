#include<stdio.h>
int main()
{
    int  a[100],b[100];
    int i=0,j=0,n;
    char c;
    while(scanf("%d%d%c",&a[i++],&b[j++],&c)!=EOF);
    for(n=0;n<j-1;n++)
    {
        if(b[n]!=0)
            printf("%d\n",a[n]/b[n]);
        else
            printf("error\n");
    }
    return 0;
}
