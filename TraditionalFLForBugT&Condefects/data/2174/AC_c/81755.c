#include <stdio.h>
void main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    if(b!=0)
    {
          int c=a/(b*1.0)+0.5;
          printf("%d\n",c);
    }
    else printf("error\n");
}
