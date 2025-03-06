#include<stdio.h>
int main()
{
	int jg;
	float a,b;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n"); 
		else
		{
			jg=a/b+0.5;
	 		printf("%d\n",jg);
	 	}
    } 
	return 0;
}	
