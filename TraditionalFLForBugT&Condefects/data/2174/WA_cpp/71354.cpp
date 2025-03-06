#include<iostream> 
using namespace std; 
int main() 
{ 
    int a,b,t; 
    while(cin>>a>>b) 
    { 
        if(b==0) 
        { 
            cout<<'error'<<endl; 
        } 
        else 
        t=a/b;
        float x,y,z;
        x=a;
		y=b;
		z=x/y;
		if(z-t>=0.5)
		{
			t=t+1;
		}
		else
		t=t;
		cout<<t<<endl;
    } 
} 
