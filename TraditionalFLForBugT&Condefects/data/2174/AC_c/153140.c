#include <stdio.h>
 void main()
{
	int a,b;
	while(scanf ("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
	{
		if((a*b)>=0)
		 printf("%d\n",((a*10)/b+5)/10);
        else if((a*b)<0)
			printf("%d\n",((a*10)/b-5)/10);
		}
	else
		printf("error\n");
	}
 }
