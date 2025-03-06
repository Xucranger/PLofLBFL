#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c;
double v,p;
cout<<""<<endl;
while(cin>>a>>b>>c){
if(a+b>c&&a+c>b&&b+c>a)
{
if(a==b&&a==c)
cout<<"DB"<<endl;
else
if(a==b&&a!=c||a==c&&a!=b||b==c&&b!=a)
cout<<"DY"<<endl;
if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
cout<<"ZJ"<<endl;
else 
cout<<"PT"<<endl;
}
else
cout<<"ERROR"<<endl;}
return 0;
}
