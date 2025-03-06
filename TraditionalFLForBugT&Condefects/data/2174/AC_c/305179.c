#include<stdio.h>
#include<math.h>
int main()
{
    float  a[100],b[100];
    int i=0,j=0,m,y;
    char c;
    float n;
    while(scanf("%d %d%c",&a[i++],&b[j++],&c)!=EOF);
    for(m=0;m<j-1;m++)
    {
        if(b[m]!=0)
        {
            n=a[m]/b[m];
            y=round(n);
            printf("%d\n",y);
        }
        else
            printf("error\n");
    }
        return 0;
}
