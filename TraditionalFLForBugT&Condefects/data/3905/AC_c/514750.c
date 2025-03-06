#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&a);
	int c=0;
	while(a--)
	{
		scanf("%d",&b);
		c+=b;
	}
	printf("%d\n",c);}
 	return 0;
}
