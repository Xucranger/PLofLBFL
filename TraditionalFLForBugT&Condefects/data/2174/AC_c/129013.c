#include <stdio.h>
int main()
{
	int a,b,c,d;
   while(scanf("%d %d",&a,&b)!=EOF)
	{
	   if(b==0)
              printf("error\n");
            else
		{
		   c=a/b;
		   d=a%b;
                   c=c+0.5+(1.0*d/b);
                   printf("%d\n",c);
		}
	}
    return 0;
}
