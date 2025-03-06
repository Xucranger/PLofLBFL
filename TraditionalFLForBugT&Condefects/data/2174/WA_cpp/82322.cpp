#include<stdio.h>
int main()
{
	int c;
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	if(b!=0)
	 {  c=int(a/b+0.5);
	printf("%d",c);}
	else 
	printf("error");
}
