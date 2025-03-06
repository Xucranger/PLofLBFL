#include<stdio.h>
int main()
{
	int a,b,c;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error\n");
		else{
		a=a*10;
		c=a/b;
		c=(c+5)/10;
		printf("%d\n",c);}
	}
}
