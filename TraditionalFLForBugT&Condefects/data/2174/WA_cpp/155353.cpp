#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	float a,b;
	while(cin>>a>>b)
	{
		if(b==0.00)
			printf("error\n");
		else 
		{
			float ans=a/b;
			printf("%.0f\n",ans);
		}
	}
	//system("pause");
	return 0;
}
