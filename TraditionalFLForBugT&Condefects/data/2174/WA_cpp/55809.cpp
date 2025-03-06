#include<iostream>
using namespace std;
int main()
{
	float a , b;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "erro" << endl;
		}
		else
		{
			cout << int(a / b + 0.5) << endl;
		}
	}
	return 0;
}
