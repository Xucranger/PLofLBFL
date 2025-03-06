#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    double a,b;
	int n;
   // cin>>n;
    while (cin>>a>>b)
    {
       if(!b)  cout<<"error"<<endl;
        else { n=a/b+0.5; cout<<n<<endl;}
    }
    return 0;
}
