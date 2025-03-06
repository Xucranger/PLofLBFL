#include<iostream>
using namespace std;
int main()
{
    int a,b,t=0;
   while(cin>>a>>b)
   {
        if(b==0)
        {
            cout<<"error";
            return 0;
        }
        t=(a+b/2)/b;
        cout<<t<<endl;
   }
    return 0;
}
