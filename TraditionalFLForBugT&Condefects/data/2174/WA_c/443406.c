#include<stdio.h>
int main()
{	double c;
	int a,b;
	while(scanf("%f%f",&a,&b)!=EOF)
	{	if(b==0) printf("error\n");
		else {
		c=a*1.0/b;if((c-a/b)>0.5)
		printf("%d\n",a/b+1);
	}
 }} 
