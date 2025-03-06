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
			temp = (float)a/b;
			if(temp-(int)temp>=0.5)
			{
				cout<< (int)temp+1<<endl;
			}
			else
			{
				cout <<(int)temp<<endl;
			}
		}
	}
}
