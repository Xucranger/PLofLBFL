#include<stdio.h>
int main()
{
	int a,b;
	int s;
	scanf("%d%d",&a,&b);
	if(b==0) printf("error\n");
	else
	{
		s=a/b;
		printf("%d",s);
	}
	return 0;
}
