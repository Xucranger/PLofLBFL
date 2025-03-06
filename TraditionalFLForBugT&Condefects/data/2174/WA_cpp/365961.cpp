#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		if(b==0)
			cout << "error";
		else
		{
			cout << (int)((float)a/(float)b+0.5);
		}			
	}
	return 0;
}
