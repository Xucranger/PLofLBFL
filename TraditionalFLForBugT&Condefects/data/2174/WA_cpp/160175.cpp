#include<stdio.h>
int main()
{
 float a,b,c;
 while(scanf("%d%d",&a,&b)!=EOF)
  if(b==0)
   printf("error\n");
  else
  { 
  c=a/b+0.5;  
  printf("%d",(int)c);
  }
getchar();
getchar();
}
