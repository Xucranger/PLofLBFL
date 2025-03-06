#include<stdio.h>
int main()
{
	int a,b,n,m;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{	printf("error");
		printf("\n");}
		else if(a%b==0)
		{	n=a/b;
		printf("%d\n",n);}
		else
		{	m=a%b;
		if(m>=b-m)
		{	n=a/b+1;
		printf("%d\n",n);}
		else
		{	n=a/b;
		printf("%d\n",n);}
		}
	}
}
