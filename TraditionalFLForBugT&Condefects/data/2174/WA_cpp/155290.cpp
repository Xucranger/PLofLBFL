#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
			printf("error\n");
		else 
		{
			float ans=(float)a/(float)b;
			printf("%.0f\n",ans);
		}
	}
	//system("pause");
	return 0;
}
