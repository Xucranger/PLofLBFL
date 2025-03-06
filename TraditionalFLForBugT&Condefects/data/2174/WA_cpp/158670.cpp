#include <iostream>
#include <vector>
using namespace std;
bool ca(int a, int b)
{
	int r1;
	if (b == 0)
	{
		cout << "error" << endl;
		return false;
	}
	if (b != 0&&a>=b)
	{
		if (a%b >= b / 2)
		{
			r1 = a / b + 1;
			cout << r1 << endl;
		}
		else r1 = a / b;
		cout << r1 << endl;
	}
	if (b != 0 && a < b)
		cout << 0 << endl;
	return true;
}
int main()
{
	int temp;
	vector<int> sn;
	while(cin>>temp)
	{
		sn.push_back(temp);
	}
	for (vector<int>::iterator i = sn.begin(); i!=sn.end();  i+=2)
	{
		ca(*i, *(i + 1));
	}
    return 0;
}
