#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d\n",&a,&b);
	if(b==0)
	  printf("error");
	else
	  c=a/b;
	printf("%d",c);
	return 0;
}
