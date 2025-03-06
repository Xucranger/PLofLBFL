#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
            c=a+b;
            if(b==0)
            {
                    cout<<"error"<<endl;
                    continue;
            }
            if(c<5)
            cout<<0<<endl;
            if(c>=5)
            {
                    cout<<c<<endl;
            }
    }
    return 0;
}
