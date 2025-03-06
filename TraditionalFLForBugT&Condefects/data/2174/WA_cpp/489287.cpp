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
		cout << a / b << endl;
	}
	return 0;
}
