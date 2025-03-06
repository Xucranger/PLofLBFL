#include<iostream>
using namespace std;
long long a,b;
int main()
{ 
    while(cin>>a>>b)
   {
        if (b==0) cout<<"error"<<endl;
        else cout<<a/b<<endl;
   }
}
