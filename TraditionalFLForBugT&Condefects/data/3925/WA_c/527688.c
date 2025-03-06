#include<stdio.h>
#include<math.h> 
int main()
{
	long long int a,b;
	int i=-1,n=-1;
	while(scanf("%lld %lld",&a,&b)!=EOF)
    {i=a%10;
    n=b%10;
    n=fabs(n*i);
	printf("%d\n",n%10);
	}
} 
