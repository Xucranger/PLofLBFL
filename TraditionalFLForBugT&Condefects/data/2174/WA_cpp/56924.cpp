#include<iostream>
using namespace std;
int main()
{
   int a,b; 
   while(cin>>a>>b) 
   {
     if(b==0)
     cout<<"error"<<endl;
     else if (a<=(b/2))
     cout<<"0"<<endl;
     else if(a<b)
     cout<<"1"<<endl;
     else if((a%b)>=(b/2))
     cout<<(a/b+1)<<endl;
     else cout<<(a/b)<<endl;                 
   }
 }
