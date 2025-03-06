#include <stdio.h>
 void main()
{
	int a,b;
	int c;
	while(scanf ("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
	{
		if(a*b>=0)
		{ c=(((a*10)/b)+5)/10;
	       printf("%d",c);}
        else if(a*b<0)
		{c=(((a*10)/b)-5)/10;
		printf("%d",c);}
	}
	else
		printf("error\n");
}
	}
