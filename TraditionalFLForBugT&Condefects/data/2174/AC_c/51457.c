#include<stdio.h>
void main()
{
	float a,b,d;
	int c;
	while(scanf("%f%f",&a,&b)!=EOF)
		if(b==0)
			printf("error\n");
		else{
			c=a/b;
			d=a/b;
			if(d-c>=0.5)
				c++;
			printf("%d\n",c);
		}
}
