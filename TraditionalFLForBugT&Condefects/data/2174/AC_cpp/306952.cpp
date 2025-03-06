#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100];
	int i=0,j=0;
	while(cin>>a[i]>>b[i])
	{
		i++;
	}
	for(;j<i;j++)
	{
		if(b[j]==0) cout<<"error"<<endl;
		else cout<<(int)(1.0*a[j]/b[j]+0.5)<<endl;
	}
	return 0;
}
