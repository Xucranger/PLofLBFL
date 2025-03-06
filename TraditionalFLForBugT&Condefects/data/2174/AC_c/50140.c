#include<stdio.h>
int main()
{
	int a,b;
	int s=0;
		while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
			printf("error\n");
		else
				{	s=(a+b/2)/b;
		printf("%d\n",s);}
	}
	return 0;
}
