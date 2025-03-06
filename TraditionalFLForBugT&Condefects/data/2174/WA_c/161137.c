#include<stdio.h>
int main()
{ float a,b;
 int y;
 while(scanf("%d %d\n",&a,&b)!=EOF)
{ if(b==0)
  printf("error");
  else
  {
   y=a/b+0.5;
  printf("%d",y) ;} 
} 
}
