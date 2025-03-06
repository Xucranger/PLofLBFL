#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=a+b;
		if(a==11&&b<=9||b==11&&a<=9)
		printf("Game Over\n");
		else
		{
			if(c%4==0||c%4==1)
			printf("A\n");
			else if(c%4==2||c%4==3)
			printf("B\n");
		}
	}
	return 0;
}
