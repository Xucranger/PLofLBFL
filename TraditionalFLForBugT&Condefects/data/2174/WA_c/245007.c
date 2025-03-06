#include<stdio.h>
int main()
{
	int a[100],b[100],s[100],i;
	while(scanf("%d%d",&a[i],&b[i])!=EOF);
	{
		if (b[i]==0) printf("error\n");
		else 
		{
			if (a[i]%b[i]>=5)
				s[i]=a[i]/b[i]+1;
			else
				s[i]=a[i]/b[i];
		}
		printf("%d\n",s[i]); 
	}
} 
