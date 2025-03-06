#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
            c=a+b;
            int x;
            if(b==0)
            {
                    cout<<"error"<<endl;
                    continue;
            }
            x=c%10;
            if(x<5)
            cout<<c-x<<endl;
            if(x>=5)
            {
                    cout<<c+10-x<<endl;
            }
    }
    return 0;
}
