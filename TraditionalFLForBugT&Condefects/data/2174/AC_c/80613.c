#include <stdio.h>
void main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    if(b!=0)
    {
          int c=(a*10/b+5)/10;
          printf("%d\n",c);
    }
    else printf("error\n");
    return 0;
}
