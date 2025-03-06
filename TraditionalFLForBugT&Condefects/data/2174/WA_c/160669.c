#include<stdio.h>
int main()
{
	int a,b,y,z;
	float x;
	while(scanf("%d %d",&a,&b)!=EOF){
	if(b==0)
	printf("error");
	else{
	x=a%b;
	y=a/b;
	if(x>=0.5)
	z=y+1;
	else
	z=y;
	printf("%d",z);}
	}
}
