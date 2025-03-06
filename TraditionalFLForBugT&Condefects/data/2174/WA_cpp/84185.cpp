#include<iostream>
int main()
{
	using namespace std;
	int a,b;
	while(cin>>a>>b)
	{
		if(a<10 && b<10)
		{
			if((a+b)%4==0 || (a+b)%4==1)
			    cout<<"A"<<endl;
			if((a+b)%4==2 ||(a+b)%4==3 )
			    cout<<"B"<<endl;
		}
		else if(a==11 && b<=9)
		    cout<<"Game Over"<<endl;
		else if(b==11 && a<=9)
		    cout<<"Game Over"<<endl;
		else if(a>=10 && b>=10)
		{
			if((a-b)>=2 || (b-a)>=2)
			{
				cout<<"Game Over"<<endl;
			}
			else if(((a+b)-20)%2==0)
			{
				cout<<"A"<<endl;
			} 
			else if(((a+b)-20)%2==1)
			{
				cout<<"B"<<endl;
			}
		}
	}
} 
