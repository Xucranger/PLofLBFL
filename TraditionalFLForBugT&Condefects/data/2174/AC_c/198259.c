#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while((scanf("%d%d",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error");
		else if(b!=0)
		{
			c=(float)a/b+0.5; 
			printf("%d",(int)c);
		}
		printf("\n");
	}
    return 0;
}
