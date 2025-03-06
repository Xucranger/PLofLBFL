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
            double c=(float)a/(float)b;
            int x,r;
            x=int(c*10);
            if(x-(a/b)>=0.5)
            r=int(c);
            else
            r=int(c)+1;
            cout<<r<<endl;}
	}
	return 0;
}
