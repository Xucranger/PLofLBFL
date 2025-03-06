#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
    c=a/b;
	if(b==0)
		printf("error");
	else
		printf("%d",c);
    return 0;
}
