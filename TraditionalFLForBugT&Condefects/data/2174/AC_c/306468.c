#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d",&a)!=EOF){
		scanf("%d",&b);
		if(b==0)
		printf("error\n");
		else
		{
		c=a/b;
		d=a%b;
		e=d*10;
		f=e/b;
		if(f>=5)
		{
		c=c+1;
		printf("%d\n",c);
	   }
	else
	printf("%d\n",c);
     	}
	}
 } 
