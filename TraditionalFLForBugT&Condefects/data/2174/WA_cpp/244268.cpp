#include<iostream>
using namespace std;
int main()
{
	int a,b,d,c;
	while(scanf("%d%d",&a,&b)!=EOF){
	if(b==0)
		printf("error");
	else
	{
		d=10*a/b;
		c=d%10;
		d=d/10;
		if(c>=5)
			printf("%d",d+1);
		else
			printf("%d",d);
	}
	}
	return 0;
}
