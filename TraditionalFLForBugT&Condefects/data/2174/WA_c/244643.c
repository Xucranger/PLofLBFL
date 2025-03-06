#include<stdio.h>
int main()
{
	float a,b;
	while((scanf("%f%f",&a,&b))!=EOF)
	{
	if(b==0)
	printf("error\n");
	else if((a/b-(int)a/b)*10>=5)
	printf("%.0f\n",a/b+1);
	else
	printf("%.0f\n",a/b);
	}
	return 0;
}
