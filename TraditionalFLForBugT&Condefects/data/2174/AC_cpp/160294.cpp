#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b!=0)
        {
            c=(int)(((float)a/b)+0.5);
            cout<<c<<endl;
        }
        else
          cout<<"error"<<endl;
    }
    return 0;
}
