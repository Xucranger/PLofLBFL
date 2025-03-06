#include<iostream>
using namespace std;
int main()
{double a,b,c,x;
 int z;
 cin>>a>>b;
 if(b!=0)
{
 c=(double)a/b;
 z=a/b;
 x=c-z;
if(2*x>=1)
cout<<(z+1)<<"\n"<<endl;
else
cout<<z<<"\n"<<endl;
}
else
cout<<"error"<<"\n"<<endl;
return 0;
}
