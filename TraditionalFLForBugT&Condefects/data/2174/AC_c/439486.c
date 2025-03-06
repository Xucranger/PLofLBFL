#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	float a,b,s;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			int s=round(a/b);
			printf("%d\n",s);
		}
		if(b==0)
			printf("error\n");
	}
}
