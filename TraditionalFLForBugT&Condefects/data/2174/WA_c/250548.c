#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int c,d,e;
		if(b==0)
		    printf("error\n");
		else
		{
			e=c/10;
			c=10*c;
		    d=c/10;
		    if(d%10>5)
		        e++;
			printf("%d\n",e);
		} 
    }
    return 0;
 } 
