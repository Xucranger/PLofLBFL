#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else if(a==0)
			printf("0");
		else if((a%b)*2>=b)
			printf("%d",a/b+1);
		else
			printf("%d",a/b);
		printf("\n");
	}
return 0;
}
