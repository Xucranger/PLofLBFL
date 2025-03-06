#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(b==0)
		cout<<"ERROR"<<endl;
	else
	{
		float ans=(float)a/(float)b;
		printf("%.0f",ans);
	}
	//system("pause");
	return 0;
}
