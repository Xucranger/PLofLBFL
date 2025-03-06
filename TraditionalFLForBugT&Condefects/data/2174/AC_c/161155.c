#include<stdio.h>
int main()
{ float a,b;
   int y;
   while(scanf("%f %f",&a,&b)!=EOF)
 {  if(b==0)
   printf("error\n");
   else
   {
    y=a/b+0.5;
     printf("%d\n",y) ;} 
  } 
}
