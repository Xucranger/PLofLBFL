#include<stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		 printf("error\n");
	    else
		 c=(float)a/(float)b+0.5;
		 printf("%d\n",c);
	}
}
