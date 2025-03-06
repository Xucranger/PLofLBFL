#include<stdio.h>
main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if (b==0)
			printf("error\n");
		else
        {
			c = a/b;
			c = (int)(c*10+5)/10;
		    printf("%d\n",c);
		}
	}
}
