#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%d,%d",&a,&b);
	if(b==0) {printf("error");}
	c=a/b;
	if(b!=0) printf("%0.1d",c);
}
