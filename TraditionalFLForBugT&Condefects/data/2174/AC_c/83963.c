#include <stdio.h>
int main()
{
	int a,b;
	int i;
	float p,q;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			i=a/b;
			p=(float)a/(float)b;
			q=p-i;
			if(q>=0.5)
				i++;
			printf("%d\n",i);
		}
	}
	return 0;
}
