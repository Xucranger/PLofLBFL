#include <stdio.h>
int main()
{
	int a=0,b=0,k;
	float c,w;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
		c=1.0*a/b;
		k=a/b;
		w=c-k;
		if(w>0.49999999)
			k=k+1;
		printf("%d\n",k);
	}  
}
