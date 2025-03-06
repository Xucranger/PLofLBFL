#include <stdio.h>
int main()
{
	int a;
	int b;
	int m;
	float n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else 
		{
			m=a/b;
			n=(a%b)*1.0/b;
			if(n>=0.5)
			m=m+1;
			else 
			m=m;
			printf("%d\n",m);
		}
	} 
	return 0;
}
