#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b!=0){
			e=b*10;
			c=e/2;
			d=a%b;
			d=d*10;
			if(d>c||d==c)
				printf("%d\n",(a/b+1));
			else
				printf("%d\n",a/b);
		}
		else
			printf("error\n");
	}
	return 0;
}
