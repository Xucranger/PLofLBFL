#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	int b=0;
	int x=0;
	int i=1;
	for(i=1;i<=3;i++)
	{
	    scanf("%d %d ",&a,&b);
	    if(b==0)
	    {
	        printf("error");
	    }
	    else
	    {
	    	x=a/b;
	        printf("%d\n",x);
	    }
	}
	return 0;
}
