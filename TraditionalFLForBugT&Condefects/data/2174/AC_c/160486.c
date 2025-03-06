#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b;
	int c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
		    c=a/b;
		    d=a%b;
		    if(d>=(float)b/2)
		    {
		    	c++;
		    }
		    printf("%d\n",c);
		}
	}
	return 0;
}
