#include<stdio.h>
int main()
{
	int a,b;
	while((scanf("%d%d",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error");
		else if(b!=0&&a%b>=b/2)
		printf("%d",a/b+1);
		else if(b!=0&&a%b<b/2)
		printf("%d",a/b);
		printf("\n");
	}
    return 0;
}
