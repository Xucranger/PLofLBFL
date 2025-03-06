#include<stdio.h>
int main()
{
	int a,b,x;
	float c,d;
	float y,p; 
	while(scanf("%d%d",&a,&b)!=EOF){
	c=a;
	d=b;
	x=a/b;
	y=c/d;
	p=y-x;
	if(b==0)
	printf("error\n");
	if(b!=0&&p>=0.50)
	printf("%d\n",x+1);
	 if(b!=0&&p<0.50)
	 printf("%d\n",x);
	}
} 
