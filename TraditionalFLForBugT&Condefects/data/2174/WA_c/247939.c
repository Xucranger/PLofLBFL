#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b!=0){
			c=b/2;
			d=a%b;
			if(d>c)
				printf("%d\n",(a/b+1));
			else
				printf("%d\n",a/b);
		}
		else
			printf("error\n");
	}
	return 0;
}
