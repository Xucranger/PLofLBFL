#include<stdio.h>
void main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		 printf("error");
	    else
		 c=(float)a/(float)b;
		 printf("%.f",c);
	}
}
