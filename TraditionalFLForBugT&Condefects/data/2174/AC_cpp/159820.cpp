#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{ 
	int a, b,c;
	float p;
	while (cin >> a >> b)
	{
		if (b)
		{
			p = (float)a / (float)b;
			c = (int)(p + 0.5) > (int)p ? (int)p + 1 : (int)p;
			cout << c << endl;
		}
		else cout << "error" << endl;
	}
	return 0;
}
