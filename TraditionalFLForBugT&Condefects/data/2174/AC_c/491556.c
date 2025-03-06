#include<stdio.h>
int main()
{
	int a,b,c;
	float d,e;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
		printf("error\n");
		continue;
	    }
		c=a/b;
		d=(float)a/(float)b;
		e=d-c;
		if(b>0)
		{
			if(e<0.5)
			printf("%d\n",c);
			else printf("%d\n",c+1);
		}
	}
}
