#include <stdio.h>
int main()
{
	int  a,b;
	while((scanf("%d %d",&a,&b))==2)
	{
		if(b==0)
		printf("error\n");
	//	else if ((2*a)==b)
	//	printf("1\n");
		else
		{
			if((((a*10)/b)%10)>=5)
		printf("%d\n",a/b+1);
		else printf("%d\n",a/b);
		}
	}
}
