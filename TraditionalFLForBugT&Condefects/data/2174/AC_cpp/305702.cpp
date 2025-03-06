#include<iostream>
using namespace std;
int main()
{
	int a=0, b=0,c=0;
	while (cin >> a >> b)
	{
		if (b == 0)
			cout << "error" << endl;
		else
		cout << int(float(a) / b + 0.5) << endl;
	}
	return 0;
}
