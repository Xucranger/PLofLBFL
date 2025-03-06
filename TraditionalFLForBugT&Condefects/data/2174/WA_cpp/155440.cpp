#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while((cin>>a>>b))
	{
		if(b==0)
		{
			cout << "error";
		}
		else
		{
			float temp;
			temp = 1.*a/b;
			if(temp-a/b>=0.5)
			{
				cout<< a/b+1<<endl;
			}
			else
			{
				cout <<a/b<<endl;
			}
		}
	}
}
