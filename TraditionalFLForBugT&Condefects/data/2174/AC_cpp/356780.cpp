#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int k1;
	double k2;
	while(cin>>a>>b){
	if(b==0)
	cout<<"error"<<endl;
	else 
	{
	k1=a%b;
	if(k1==0)	
	cout<<a/b<<endl;
	else
	{
	k2=b*1.0/k1;
	//cout<<"k2"<<k2<<endl;
	if(k2>2)
	cout<<a/b<<endl;
	else
	cout<<a/b+1<<endl;
    }
	}
} 
	return 0;
}
