#include<iostream>
using namespace std;
int main()
{
int a,b;
int m;
while(cin>>a>>b)
{
if(b==0)
cout<<"error"<<endl;
else
{
m=(a*1.0)/b+0.5;
cout<<m<<endl;
}
}
}
