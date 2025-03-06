#include<stdio.h>
int main()
{
    int a,b,i=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
      if(b==0){printf("NO");break;}
      else printf("%.0f",a/b);
    }
    return 1;
}
