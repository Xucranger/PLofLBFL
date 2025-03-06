#include<stdio.h>
int main(void){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			if((a%b)*2>=b)
			printf("%d\n",a/b+1);
			else
			printf("%d\n",a/b);
		}
		else
		printf("error\n");
	}
	return 0;
}
