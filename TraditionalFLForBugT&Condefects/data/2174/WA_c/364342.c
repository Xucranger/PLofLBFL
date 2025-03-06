#include<stdio.h>
int main()
{
  int a,b,result;
  while(scanf("%d %d",&a,&b)!=EOF)
  {
     if(b==0)
     printf("error\n");
     else
     {
           result=a/b;
           printf("%d\n",result);
     }
  }
}
