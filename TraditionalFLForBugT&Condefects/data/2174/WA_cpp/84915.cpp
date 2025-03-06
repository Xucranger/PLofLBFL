#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    while(cin>>a>>b)
    {
            if(b==0)
            {
            cout<<"erro"<<endl;
            }
            else
            {
                t=a%b;
                c=a/b;
                if(2*t>=0&&2*t<b)
                cout<<c<<endl;
                if(2*t>=b)
                cout<<c+1<<endl;
            } 
    }
    return 0; 
}
