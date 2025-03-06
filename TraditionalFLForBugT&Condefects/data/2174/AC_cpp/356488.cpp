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
			float s=1.0*a/b;
			int kk=s;
			if((s-kk)<0.5)
			{
				cout << a/b << endl;
			}
			else cout << a/b+1 << endl;
		}
}
return 0;
}
