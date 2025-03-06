#include<stdio.h>
int main()
{
	float a,b;
	float c;
	int d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	if(b==0)
	printf("error\n");
    else{
	c=a/b;
	d=a/b;
	if((c-d)>=0.5)
	printf("%d\n",d+1);
	else
	printf("%d\n",d);
    }
	}
}
