#include<iostream>
using namespace std;
int main()
{
    float a,b,z;
    while(cin>>a>>b)
    {
    	if(b==0)
    	cout<<"error"<<endl;
    	else{
    	z=a/b*1.0;
    	if(z-(int)z>=0.5)
    	cout<<int(z)+1<<endl;
    	else
    	cout<<(int)z<<endl;
    }
	}
}
