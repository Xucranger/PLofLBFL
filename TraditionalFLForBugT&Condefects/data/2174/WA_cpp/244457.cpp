#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int f=0;
	while(cin >> a >> b){
	if(f!=0) cout<<endl;
	if(b==0) cout<<"error";
	if(b!=0) cout<<a/b;
	f=1;
	}
}
