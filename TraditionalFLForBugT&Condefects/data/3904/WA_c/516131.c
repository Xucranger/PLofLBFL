#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	printf("%d\n",n); 
	while(scanf("%d %d",&a,&b)!=EOF)
	{printf("%d\n",a+b);}
	return 0; 
}
