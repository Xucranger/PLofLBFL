#include<stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
	 else if(1.0*a/b-a/b>=0.5)
		{
			c=a/b+1;
             printf("%d\n",c);
		}
		else
		{
				c=a/b;
		printf("%d\n",c);
    }
}
}
