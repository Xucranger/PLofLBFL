#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,s;
  float x,y;
  while((scanf("%d%d",&a,&b))!=EOF)
   {
     if(b==0)
       printf("error\n");
     else
     {
       x=(float)a/b;y=x-floor(x);
       if(y>=0.5)
        {
          s=a/b+1;printf("%d\n",s);
        }
       else
        {
          s=a/b;printf("%d\n",s);
        }
     }
   }
  return 0;
}
