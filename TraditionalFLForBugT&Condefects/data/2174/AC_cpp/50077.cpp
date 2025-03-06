#include<iostream>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	while(cin >> a >> b)
	{
		if(b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		c = a / b;
		if(int(c * 10) % 10 >= 5)
		{
			c += 1;
		}
		cout << (int)c << endl;
	}
	return 0;
} 
