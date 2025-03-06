#include<stdio.h>
int main()
{
	int a,b;
	float s;
	scanf("%d%d",&a,&b);
	if(b==0) printf("error\n");
	else
	{
		s=(float)a/b;
		printf("%.f",s);
	}
	return 0;
}
