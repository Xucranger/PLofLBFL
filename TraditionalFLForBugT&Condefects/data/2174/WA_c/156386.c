#include<stdio.h>
void division(int a,int b)
{
	if(b==0)
	printf("error\n");
	else
	printf("%d\n",a/b);
}
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	division(a,b);
	return 0;	
}
