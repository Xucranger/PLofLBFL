#include<iostream>
using namespace std;
int main()
{
     int i,j;
     while(cin>>i>>j)
     {
          if(j==0)
          {
               cout<<"error"<<endl;
               continue;
          }
          cout<<i/j<<endl;    
     }
     return 0;
}
