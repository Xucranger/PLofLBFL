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
			cout<<"error"<<endl;
		else 
		{
			float ans=(float)a/b;
			printf("%.0f\n",ans);
		}
	}
	//system("pause");
	return 0;
}
