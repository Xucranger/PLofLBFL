#include <stdio.h>
int main()
{
	int m,n;
	int i;
	float p,q;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(n==0)
			printf("error\n");
		else
		{
			i=m/n;
			p=(float)m/(float)n;
			q=p-i;
			if(q>=0.5)
				i++;
			printf("%d\n",i);
}
                }
	return 0;
}
