#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a/b;
			if((a%b)*2>=b)
			printf("%d\n",c+1);
			else
			printf("%d\n",c);
		}
	}
	return 0;
}
