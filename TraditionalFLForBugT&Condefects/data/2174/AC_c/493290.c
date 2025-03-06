#include<stdio.h>
int main()
{
	int a,b;
	double c;
	while(scanf("%d %d",&a,&b)!=EOF){
	if(b==0)
	printf("error\n");
	else
	{
	c=(double)(1.0*a/b);
	if(c>=a/b+0.5)
	printf("%d\n",a/b+1);
	if(c<a/b+0.5)
	printf("%d\n",a/b);
    }
}
	return 0;
}
