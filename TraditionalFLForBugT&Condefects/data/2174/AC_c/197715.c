#include<stdio.h>
void main()
{
int a,b,n;
float x;
while (scanf("%d %d",&a,&b)!=EOF){
	if(b){
		x=1.0*a/b;
		if(x>0)x+=0.5;
		else x-=0.5;
		n=x;
		printf("%d\n",n);
	}
	else printf("error\n");
}
}
