#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	if(b==0)
		printf("error\n");
	else
		printf("%d\n",(a+(b/2))/b);
	if(d==0)
		printf("error\n");
	else
		printf("%d\n",(c+(d/2))/d);
    return 0;
}
