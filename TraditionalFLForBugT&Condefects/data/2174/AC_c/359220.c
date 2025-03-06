#include<stdio.h>
int main()
{
	int a;
	int b;
    while(scanf("%d %d",&a,&b)!=EOF)
	{  
	    if(b)
	    printf("%d\n",(a+b/2)/b);
		else
		printf("error\n");	
	}
	return 0;
}
