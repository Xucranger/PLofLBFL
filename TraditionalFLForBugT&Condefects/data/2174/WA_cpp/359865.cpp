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
	else{c=(float)a/b;
	     printf("%.f\n",c);}
}
return 0;
}
