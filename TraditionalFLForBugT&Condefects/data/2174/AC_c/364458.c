#include<stdio.h>
int main()
{
  int a,b,result;
  float c;
  while(scanf("%d %d",&a,&b)!=EOF)
  {
     if(b==0)
     printf("error\n");
     else
     {
           result=a/b;
           c=(float)a/b;
           if((c-result)>=0.5)
                result++;
          // printf("%.2f\n",c);
           printf("%d\n",result);
     }
  }
}
