#include<stdio.h>
int main()
{
	int a,b;
	float s;
	int S;
	while(scanf("%d%d",&a,&b)!=EOF)
		if(b==0)
			printf("error\n");
		else
		{	s=1.0*a/b+0.5;
		S=s;
		printf("%d\n",S);
		}return 0;
}
