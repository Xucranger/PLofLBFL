#include<stdio.h>
int main()
{
	int ic;
	float fa,fb,fc;
	while(scanf("%f%f",&fa,&fb)!=EOF)
	{
		if(fb==0)
		{
			printf("error\n");
		}
		else
		{
			fc=fa/fb;
			ic=(int)fa/fb;
			if(fc-ic>=0.5)
			printf("%d\n",ic+1);
			else
			printf("%d\n",ic);
		}
	}
	return 0;
 } 
