#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	int b=0;
	int x=0;
	int i=1;
	while(scanf("%d %d ",&a,&b)!=-1)
	{
	    if(b==0)
	    {
	        printf("error\n");
	    }
	    else
	    {
	    	x=a/b;
	        printf("%d\n",x);
	    }	
	}
	return 0;
}
