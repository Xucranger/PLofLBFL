#include<stdio.h>
int main()
{
	int a,b;
	float n;
	int m;
	while(scanf("%d%d",&a,&b)!=EOF)
	if(b==0)
	printf("error\n");
	else
	{
	n=1.0*a/b;
	m=a/b;
	if(n-m<0.49999)
	printf("%d\n",a/b);
	else
	printf("%d\n",a/b+1);}
	return 0;
}
