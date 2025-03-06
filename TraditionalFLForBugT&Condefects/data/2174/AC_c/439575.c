#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	while(scanf("%d%d/n",&a,&b)!=EOF)
	{
		int c;float d;
		if(b==0)
		printf("error\n");
		else{
		c=a/b;
		d=1.0*a/b;
		if(d-c>=0.5)
		printf("%d\n",c+1);
		else
		printf("%d\n",c);}
	}
}
