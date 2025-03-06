#include<stdio.h> 
int main()
{
	int s,n;
	float a,b,m;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			m=a/b;
			n=a/b;
			if((m-n)>=0.5)
				s=n+1;
			else
				s=n;
			printf("%d\n",s);
		}
	}
	return 0;
}
