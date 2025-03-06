#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,d;
	int c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=a/b;
		d=a/b;
		if(b==0)
		{
		printf("error\n");
		}
		else{
	    d=d-c;
	    if(d>=0.5)
	    c++;
	    printf("%d\n",c);
		}
	}
}
