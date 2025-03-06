#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
			printf("error\n");
		else
		{
			c=10*a/b;
		d=a/b;
		if(c-10*d>=5)
			printf("%d\n",d+1);
		if(c-10*d<5)
			printf("%d\n",d);
		}
	}
	return 0;
}
