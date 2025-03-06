#include <iostream>
using namespace std;
int main()
{
int a,b;
while(cin >> a >> b)
{
	if(b==0) cout << "error" << endl;
		else
		{
			int s=a%b;
			if(s<=4)
			{
				cout << a/b << endl;
			}
			else cout << a/b+1 << endl;
		}
}
return 0;
}
