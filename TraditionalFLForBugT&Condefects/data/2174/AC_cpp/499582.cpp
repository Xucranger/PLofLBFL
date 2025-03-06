#include<stdio.h>
int main()
{
      int a,b;
      float c;
     while(scanf("%d%d",&a,&b)!=-1)
    {
             if(!b)
                 printf("error\n");
             else
            {
			  c=(float)a/(float)b;
                 printf("%d\n",int(c+0.5));
				 }
     }
	 return 0;
	 }
