#include<stdio.h>
void main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		float d,e,f;
		int c;
        if(b==0)
		{
			printf("error\n");
		}
		else
		{
			e=a;f=b;
			d=e/f;
		    c=e/f;
	     if(d-c<0.5)
			printf("%d\n",c);
		else
			printf("%d\n",c+1);
		}
	}
}
