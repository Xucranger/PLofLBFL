#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0){
			printf("ERROR");
			printf("\n");}
			else {printf("%d",a/b);
			printf("\n");}
	}
	return 0;
}
