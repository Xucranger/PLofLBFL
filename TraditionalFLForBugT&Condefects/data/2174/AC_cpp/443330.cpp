#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	float a, b, c;
	while (cin >> a >> b)
	{
		if (b == 0)
			cout << "error" << endl;
		else
		{
			c = a / b;
			int d = (int)(c + 0.5);
			cout << d << endl;
		}
	}
}
