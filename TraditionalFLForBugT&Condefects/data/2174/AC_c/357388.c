#include <stdio.h>
int chufa(int a,int b)
{
    float l,i;
    int m;
    m=a/b;
    l=1.0*a/b;
    i=l-m;
    if(i*10>=5)
    return l+1;
    else
        return l;
}
int main()
{
    int a,b;
    float n;
    while(scanf("%d %d",&a,&b)!=EOF){
    if(b!=0)
    {
    n=chufa(a,b);
    printf("%.f\n",n);
    }
    else printf("error\n");}
    return 0;
}
