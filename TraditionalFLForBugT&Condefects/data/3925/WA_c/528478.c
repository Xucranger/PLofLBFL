#include<stdio.h>
int main()
{
	long long int a,b;
	while(scanf("%u%u",&a,&b)!=EOF)
	printf("%u",a*b%10);
}
