#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	    if(b==0)
		   printf("error");
		else
		{
		c=a%b;
	    d=(a-c)/b;
	    if(2*c>=b)
	       d++;
	    printf("%d\n",d);
	    }
	}
}
