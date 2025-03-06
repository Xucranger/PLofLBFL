#include<iostream>
int main()
{
	using namespace std;
	int a,b,i;
	float j;
	while(cin>>a>>b)
	{
		if(b==0)
		    cout<<"error"<<endl;
		if(b!=0)
		{
			i=a/b;
			j=float(a)/float(b);
			if((j-i)>=0.5)
			    i+=1;
			cout<<i<<endl;
		}
	}
	return 0;
}
