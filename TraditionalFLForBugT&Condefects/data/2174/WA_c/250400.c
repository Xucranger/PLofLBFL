#include<stdio.h>
int main()
{
    int a,b,i=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
      if(b==0)
      printf("NO\n");
      else 
      printf("%.0f\n",a/b);
    }
    return 1;
}
