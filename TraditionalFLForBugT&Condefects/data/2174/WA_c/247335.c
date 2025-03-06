#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b!=0){
			if(a%b>b/2)
			printf("%d\n",a/b+1);
			else
				printf("%d\n",a/b);
		}
		else
			printf("error");
	}
	return 0;
}
