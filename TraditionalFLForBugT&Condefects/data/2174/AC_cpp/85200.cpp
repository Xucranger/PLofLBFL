#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
            double x=(float)a/(float)b;
            if(x-(a/b)<0.5)
            c=a/b; 
            else 
            c=(a/b)+1; 
            cout<<c<<endl;}
	}
	return 0;
}
