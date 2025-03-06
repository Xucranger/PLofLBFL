#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b!=0){
			if(((a*10)/b)%10>=5)  cout<<a/b+1<<endl;
			else  cout<<a/b<<endl;
		}
		else{
			cout<<"error"<<endl;
		}
	}
	return 0;
}
