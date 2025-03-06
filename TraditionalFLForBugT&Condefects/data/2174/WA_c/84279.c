#include<stdio.h>
int main()
{
	int a;
	float b;
	while((scanf("%d %f",&a,&b))!=EOF)
	if(b!=0)
		{
			printf("%.0f\n",a/b);
		}
		else
			printf("error\n");
		return 0;
}
