#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,sum,sum2,result,k;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
		printf("error\n");
		continue;
		};
	sum = a/b;
	k=a%b;
	if(b%2==1)
		{
			b++;
		}
	if(k>=b/2)
		sum++;
	printf("%d",sum);
	return 0;
}
}
