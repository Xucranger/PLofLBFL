#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	float a,b,c;
while(cin >> a >> b)
{
	if(b!=0){c=a/b;
	if(int(c+0.5)>int(c))
	cout<<int(c)+1<<endl;
	else
	cout<<int(c)<<endl;
	}
	else
	cout<<"error"<<endl;
}
	return 0;
}
