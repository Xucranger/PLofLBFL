#include<stdio.h>
#include<math.h>
int main()
{
      int a,b;
     while(scanf("%d%d",&a,&b)==2)
    {
             if(b==0)
                 printf("error\n");
             else
                 printf("%.0f\n",floor((float)a/b+0.5));
     }
return 0;
}
