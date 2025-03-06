#include<stdio.h>
int main()
{
	int a,b,d;
	float s,c;
	while(scanf("%d %d",&a,&b)!=EOF) 
	{
		if(b==0) printf("error\n");
		else
		{
			s=(float)a/b;
			c=s-(int)s;
			if(c>=0.5)
			{
				d=(int)s+1;
				printf("%d\n",d);
			}
			else 
			{
				d=(int)s;
				printf("%d\n",d);
			}
		}
	}
	return 0;
}
