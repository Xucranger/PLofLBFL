#include<cstdio>
#include<iostream>
using namespace std;
int main() 
{
	int a, b,r;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		r = (int)(a / (b * 1.0)+0.5 );
		cout << r << endl;
	}
	return 0;
}
