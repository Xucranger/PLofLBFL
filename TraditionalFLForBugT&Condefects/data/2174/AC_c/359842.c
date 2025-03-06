#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b==0) {printf("error\n");continue;}
		else printf("%d\n",(int)(a/b+0.5));
	}
	return 0;
 }  
