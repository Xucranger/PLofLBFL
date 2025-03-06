#include<iostream>
using namespace std;
int main()
{
    int a,b,A,B;
    while(cin>>a>>b)
        if((a==11||b==11)&&(11-a>=2||11-b>=2))
         cout<<"Game Over"<<'\n';
        else
		{if(a>=10&&b>=10)
		{
			if(a-b==2||b-a==2)
			cout<<"Game Over"<<'\n';
			else
			{
				if(a==b)
				cout<<'A'<<'\n';
				else
				cout<<'B'<<'\n';
			}
		}
        else
        {
        	if((a+b)%4<=1)
        	cout<<'A'<<'\n';
        	else
			cout<<'B'<<'\n';
        }}
    return 0;
}
