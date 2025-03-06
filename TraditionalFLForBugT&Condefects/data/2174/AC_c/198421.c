#include<stdio.h>
void main()
{
	int a,b,m;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		 printf("error\n");
	    else
		{
			c=(float)a/(float)b+0.5;
		    m=(int)c;
		    printf("%d\n",m);
		}
	}
}
