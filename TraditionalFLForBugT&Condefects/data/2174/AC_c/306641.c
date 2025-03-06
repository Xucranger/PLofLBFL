#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
	if(b==0)
	  printf("error\n");
	else
	{
	int c=a/b+0.5;
	printf("%d\n",c);
    }
	}
	return 0;
 }
