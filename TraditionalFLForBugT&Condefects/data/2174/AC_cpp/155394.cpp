#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while ((scanf("%d%d", &a, &b)) != EOF)
	{
		if (b == 0)
			cout << "error" << endl;
		else
		{
			float temp;
			temp = (float)a / b;
			if ((temp - (int)temp) >= 0.5)
				cout << (int)temp + 1 << endl;
			else
				cout << (int)temp << endl;
		}
	}
}
