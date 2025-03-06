#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,m;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{   c=a/b;
		    m=a%b;
		    if(m*2>=b)
			c=c+1;
			printf("%d\n",c);
		}
	}
	return 0;
}
