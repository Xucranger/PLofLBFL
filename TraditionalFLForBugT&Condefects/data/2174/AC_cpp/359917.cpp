#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
int a,b;
while(cin>>a>>b)
{	float c;
    if(b==0) cout<<"error\n";
	else{c=(float)a/b+0.5;
	     cout<<(int)c<<endl;}
}
return 0;
}
