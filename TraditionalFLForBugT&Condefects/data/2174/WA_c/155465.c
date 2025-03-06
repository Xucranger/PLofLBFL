#include<stdio.h>
#include<math.h>
int main()
{   
	int s[2]; 
	int a,b,c;
	while((scanf("%d%d",&s[0],&s[1]))!=EOF)
	{
		a=s[0];
		b=s[1];
		if(b==0)
		printf("error");
		else
		c=(a/b)+0.5;
	}
	printf("%d",c);
	}
