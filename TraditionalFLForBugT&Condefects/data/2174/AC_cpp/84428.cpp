#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0) cout<<"error"<<endl;
		else
		{
			double aa,bb;
			aa=a;bb=b;
			long t=(aa/bb*1000+5)/10;
			double h;
			h=(double)t/100;
			int ans=h;
			double temp;
			temp=h-ans;
			temp=temp*10;
			int re=temp;
			if(re>=5)  ans++;
			cout<<ans<<endl;
		}
	}
	return 0;
}
