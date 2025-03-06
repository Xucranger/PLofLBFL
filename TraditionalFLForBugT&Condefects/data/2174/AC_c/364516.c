#include <stdio.h>
int main()
{
	float a,b;
	int c,flag;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		flag=1;
		c=(int)((a/b)+0.5);
		if(b==0)
		{
		  printf("error\n");
		  flag=0;
	   }
	    if(flag)
		printf("%d\n",c);
	}
 } 
