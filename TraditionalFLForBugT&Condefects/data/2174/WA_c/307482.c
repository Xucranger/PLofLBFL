#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d,%d",&a,&b)!=EOF)
    {c=a/b;
    d=a%b;
    e=b/2;
    if(b==0)
        printf("error");
    else if(d>=e)
        {
            c+=1;
            printf("%d ",c);}
    else
        printf("%d ",c);}
    return 0;
}
