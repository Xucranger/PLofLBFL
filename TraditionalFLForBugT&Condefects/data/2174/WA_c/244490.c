#include <stdio.h>
int main()
{
	int a,b;
	//while(scanf("%d %d",&a,&b))
	//{
		scanf("%d %d",&a,&b);
		if(b==0)
		printf("error");
		else
		printf("%d",a/b);
	//}
	return 0;
}
