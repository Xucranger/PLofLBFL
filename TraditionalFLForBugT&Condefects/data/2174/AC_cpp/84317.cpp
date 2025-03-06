#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b!=0)
	cout<<(int)((float)a/b+0.5)<<endl;  
        else
	 cout<<"error"<<endl;
    }
	return 0;
}
