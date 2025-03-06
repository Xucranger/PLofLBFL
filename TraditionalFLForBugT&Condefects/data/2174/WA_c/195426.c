#include<stdio.h>
int main(void)
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
	        printf("%d",a/b);
	    else 
	        printf("error");
	}
}
