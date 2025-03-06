#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
		{
			int c=a/b;
			if(a%b==0)
			{
				cout<<c<<endl;
			}
			else
			{
				if((double)a/(double)b-c<0.50000)
				{
					cout<<c<<endl;
				}
				else
				{
					cout<<c+1<<endl;
				}
			}
		}
    }
	return 0;
}
