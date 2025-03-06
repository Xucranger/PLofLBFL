#include <stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
			break;
		}
	    c=a/b+(int)(a*1.0/b*10)%10/5;	
		printf("%d\n",c);
	}
}
