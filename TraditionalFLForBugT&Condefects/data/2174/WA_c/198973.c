#include<stdio.h>
int main()
{
	int a,b;
	float s;
	while(scanf("%d %d",&a,&b)!=EOF) 
	{
		if(b==0) printf("error\n");
		else
		{
			s=(float)a/b;
			printf("%.f\n",s);
		}
	}
	return 0;
}
